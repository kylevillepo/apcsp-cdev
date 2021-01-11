#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %p\n", (void*)ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %p\n", (void*)&a);

  float d;
  float e;

  float* ptrtod;
  float* ptrtoe;

  ptrtod = &d;
  ptrtoe = &e;

  d = 10.555;
  e = 20.222;

  printf("the value of d is %f\nthe address of d is %p\n", d, &d);
  printf("the value of e is %f\nthe address of e is %p\n", e, &e);

  *ptrtod = 20.222;
  *ptrtoe = 10.555;

  printf("the value of d is %f\nthe address of d is %p\n", d, &d); 
  printf("the value of e is %f\nthe address of e is %p\n", e, &e);

}
