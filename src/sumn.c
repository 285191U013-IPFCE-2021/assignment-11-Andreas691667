#include "sumn.h"

#include<stdio.h>
#include <assert.h>
#include <math.h>

int sumn (int n)
{
    // assert(n>1);

    //base case: when n equals 1, the answer is 1
    if (n == 1)
        return 1;

    //inductive step
    else
        return ((2*n)-1) + sumn(n-1);
}