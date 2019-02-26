#include <stdio.h>
int main(){
double a,b,c,d,e,f,g,h,i,j,min,max,sum,product,test;
printf("Enter 10 floating-point numbers:\n");
scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf",&a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
sum= a+b+c+d+e+f+g+h+i+j;
product= a*b*c*d*e*f*g*h*i*j;
float array[]={a,b,c,d,e,f,g,h,i,j};
min = array[0];
for(int t=0; t<10;t++){
test =array[t];
if(test > max){
max=test;
}
if(test < min){
min = test;
}
}
printf("Sum is %.5lf\n",sum);
printf("Min is %.5lf\n",min);
printf("Max is %.5lf\n",max);
printf("Product is %.5lf\n", product);
}
