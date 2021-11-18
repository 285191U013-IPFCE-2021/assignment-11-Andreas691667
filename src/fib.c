/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp)
{
    /*  Definition of Fibonacci numbers:
    *   First fib_number, F1 = 0
    *   Second fib_number, F2 = 1
    *   Third fib_number, F1 = 1
    *   Fourth fib_number, F1 = 2
    *   n'te fib_number, Fn = Fn-2+Fn-1
    */


   //precondition: n >= 1
    assert(n>=1);

    //base case 1: The first fib.no. is 0 (p)
    if (n == 1)
        return p;

    //base case 2: The second fib.no. is 1 (pp)
    else if (n == 2)
        return pp;
    
    //tail-recursive step 
    else
        return fib(n-1, pp, pp+p);
}
