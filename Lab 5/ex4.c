// why recursion WHYYYYYYY
#include <stdio.h>
#define MAX 10
char arr[MAX];
void function(int  a, int b){
if(a==b){
printf("%s\n", arr);
}else{
arr[a] = '0';
function(a+1,b);
arr[a] = '1';
function(a+1,b);
}

}
// almost forgot main oops
int main(){
int c;
scanf("%d",&c);
function(0, c);
}
