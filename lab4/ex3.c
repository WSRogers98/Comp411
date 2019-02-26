#include <stdio.h>
#include<string.h>

int NchooseK(int n, int k){

if(k==0 || n==k){
return 1;
}

return NchooseK(n-1, k-1) + NchooseK(n-1, k);

}


int main(){
int a,b;
int i=1;
while(i=1){
printf("Enter two integers (for n and k) separated by space:\n");
scanf("%d%d",&a, &b);
if(a==0 && b==0){
printf("1");
break;
}else{
printf("%d\n", NchooseK(a, b));
}
}
}

