#include <stdio.h>
void main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%2==0 && n%3==0){
        printf("The number %d is divisible by 6",n);
    }else{
        printf("The number %d is not divisible by 6",n);
    }
}