#include <stdio.h>
void main(){
    int a,b;
    float c,d,e,f,g;
    printf("Enter any two numbers:");
    scanf("%d%d",&a,&b);
    c=a+b;
    d=a-b;
    e=a/b;
    f=a%b;
    g=a*b;
    printf("The arithmatic operators perform the following functions: \n Sum=%f \n Subtraction=%f \n Division=%f \n Modulo=%f \n Product=%f \n",c,d,e,f,g);

}