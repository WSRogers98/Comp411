/*  Example: C program to find area of a circle */

#include <stdio.h>9

int main()
{
  float r, a;

  printf("Enter side (in inches):\n");
  scanf("%f", &r);

  a =  r * r;
// this hurts my eyes
  printf("Square area is %3.2f (sq in).\n", a);
}

