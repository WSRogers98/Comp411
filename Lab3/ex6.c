#include <string.h>
#include <stdio.h>
#define MAX_BUF 1024

int main(){
int n;

 printf("Please enter the starting number of the Collatz sequence:\n");
scanf("%i", &n);
printf("%i, ",n);
while (n !=1){
if (n%2 == 0) {
  n = n/2;
 if (n == 1) {
  printf("%i\n", n);
  }
else{
printf("%i, ",n);
}
} 
else {
 n = 3*n + 1;
  if (n == 1) {
  printf("%i\n", n);
 }
 else {
 printf("%i, ", n);
}
}
}
}

