#include "sum.h"

#include<stdio.h>
#include<assert.h>

/* Sum integers 1 to n */
int sum (int n)
{
/* pre-condition */
  assert (n >= 1);
/* post-condition */
  if (n > 1)
    return n + sum (n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
int sumtail (int n, int total)
{
  //precondition: n >= 1
  if (n < 1)
    return -1;  

  if (n == 1)
    return 1 + total;
  else
    return sumtail(n - 1, n + total);
}

/* Sum integers 1 to n */
int sumwhile (int n)
{
  //precondition: n >= 1
  if (n < 1)
    return -1; 
  
  int res = 0;
  int temp = n;

  for(int i = 1;i<=n;i++) {
    res = res + temp;
    temp = n-i;
  }
  
  return res;
}

