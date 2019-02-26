#include<stdio.h>
int main(){
int a,test,j,k;
while(a!=0){
printf("Number ?\n");
scanf("%d",&a);
if(a==0){
printf("Done\n");
}
test=0;
j=0;
k=0;

for(int i=1;test<=a;i++){
test =test+i;
j=i;
}
k=test-j;
if(test==a|| a==k && a!=0){
printf("%d is a triangular number\n",a);
}
else if(test >a&& a!=0){
printf("%d is not triangular, nearest triangular number below %d is %d\n",a,a,k);
}
}
}
