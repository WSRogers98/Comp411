#include <stdio.h>

int A[10][10];
int B[10][10];
int C[10][10];
int d,e;
int main() {
scanf("%d", &d);
for(int i=0; i<d;i++){
for (int j=0; j<d;j++){
scanf("%d", &e);
A[i][j] = e;
}
}
for(int i=0; i<d;i++){
for (int j=0; j<d;j++){
scanf("%d", &e);
B[i][j] = e;
}
}
 for(int i=0; i<d;i++){
for (int j=0; j<d;j++){
scanf("%d", &e);
C[i][j] = 0;
for(int k=0; k<d; k++){
C[i][j] += A[i][k]*B[k][j];
}
printf("%6d", C[i][j]);
}
printf("\n");
}
	// code here
}
