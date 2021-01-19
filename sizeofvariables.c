#include<stdio.h>

int main()
{
  int a = 545;

  // print value and size of an int variable
  printf("int a value: %d and size: %lu bytes\n", a, sizeof(a));

  char c = 'b';

  // print value and size of a char variable
  printf("char c value: %c and size: %lu bytes\n", c, sizeof(c));

  float d = 10.934;

  // print value and size of a float variable
  printf("float d value: %f and size: %lu bytes\n", d, sizeof(d));

  double e = 10.9342;

  // print value and size of double variable
  printf("double e value: %g and size: %lu bytes\n", e, sizeof(e));
}

