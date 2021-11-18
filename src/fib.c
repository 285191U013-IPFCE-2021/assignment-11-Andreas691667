/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp)
{
   //precondition: n >= 1
    if (n < 1)
        return -1;     

    //base case: the first and second fib_number equals 1
    if (n == 1 || n == 2)
        return p;
    
    //recursive step: 
    else 
        return fib(n-1, pp, pp+p);
}
