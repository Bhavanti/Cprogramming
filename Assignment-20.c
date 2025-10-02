#include <stdio.h>
void main(){
 int A[5],g,l;
 printf("Enter 5 elements to array A:");
 
 for(int i=0; i<5; i++){
    scanf("%d",&A[i]);
    g=A[0];
    l=A[0];
 }
 for(int i=0; i<5; i++){
    if(A[i]>g){
        g=A[i];
    }
    if(A[i]<l){
        l=A[i];
    }
 }
 printf("The greatest and lowest value in the array is = %d and %d respectively",g,l);
 
}