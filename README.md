<p align='center'>
  <img src='http://phdp.github.io/images/randamu.png' alt='Randamu logo'/>
</p>

<p align='right'>
  <img src='https://travis-ci.org/PhDP/randamu.svg?branch=master' alt='Travis status'/>
</p>

randamu is a small MIT-licensed C library that includes a high-quality random
number generator. The code is based on WELL1024, a new random generator with a
better distribution than the mersenne twister, and is tested against a sequence
generated by the authors of the algorithm (which includes the creator of the
mersenne twister).

Other functions and algorithms related to probability theory and statistics are
also included. The bogosort algorithm is a joke (don't use it!), but everything
else is not.

Note: there is no C++ in this code, github is mislabelling some header files.

Installing
----------
On Linux or UNIX-like systems:

    $ git clone https://github.com/PhDP/randamu.git
    $ cd randamu
    $ cmake .
    $ make
    $ sudo make install

It is not currently tested on Windows but it will.

To launch tests simply add:

    $ make test

after 'make'.

To generate the documentation, type *doxygen* at the root of the directory.

Usage
-----
    #include <stdlib.h>
    #include <stdio.h>
    #include <time.h>
    #include <randamu/rng.h>

    int main() {
      const clock_t start = clock();
      rd_rng r; // A random number generator.
      rd_rng_init_time(&r); // Initialize with the current time.
      const int max = 2000000000;
      int success = 0;
      for (int i = 0; i < max; ++i) {
        // Creates points in the unit square:
        const double x = rd_rng_double(&r);
        const double y = rd_rng_double(&r);
        // Tests if they are within the unit circle:
        success += (x * x + y * y) < 1.0;
      }
      // Print estimate of pi:
      printf("Pi ~= %f!\n", 4.0 * success / max);
      printf("Time: %.4f seconds.\n", ((double)(clock() - start) / CLOCKS_PER_SEC));
      return EXIT_SUCCESS;
    }

...will compile with:

    $ clang -Wall -std=c99 -O2 random.c -o random -lrandamu -lm

Of course 'gcc' or another compiler can be used. On an Intel Core i7-4702HQ
with clang 3.5, this code takes 21.8164 seconds, a ~9% improvement over gsl
with the mersenne twister, and you don't need to adopt the GPL license for your
code.

License
-------
MIT <http://opensource.org/licenses/MIT>

