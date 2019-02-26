//setup
#include <stdio.h>

int main()
{
int i;
  printf("Enter a number from 1 to 20:\n");
  scanf("%d", &i);
if( i > 20 || i <1){
printf("Number is not in the range from 1 to 20\n");
}
else{
printf("Here are the first %d ordinal numbers:\n",i);
for(int j=1;j<=i;j++){
if(j ==1){
printf("1st\n");
}
if(j ==2){
printf("2nd\n");
}
if(j ==3){
printf("3rd\n");
}
if(j>3){
printf("%dth\n",j);
}
}
}
}
