/* Example: matrices represented by 2-dimensional arrays */

#include <stdio.h>

int main()
{
  int A[3][3];    // matrix A     
  int B[3][3];    // matrix B
  int C[3][3];    // matrix to store their sum
  // add your code below
  printf("Please enter 9 values for matrix A:\n");
for (int i=0; i < 3; i++) {
        for (int j=0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }
  printf("Please enter 9 values for matrix B:\n");
    for (int k=0; k < 3; k++) {
        for (int l=0; l < 3; l++) {
            scanf("%d", &B[k][l]);
            C[k][l] = A[k][l] + B[k][l];
        } }
  printf("C = B + A =\n");
  for (int m=0; m < 3; m++) {
      if (m != 0) {
          printf("\n");
      }
      for (int n=0; n < 3; n++) {
          printf("%10d", C[m][n]);
      }
  }
}
