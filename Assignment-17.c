#include <stdio.h>
void main(){
    int A[3][3],B[3][3],C[3][3];
    printf("Enter 9 elements to array A:");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&A[i][j]);
        }
    }   
     printf("Enter 9 elements to array B:");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&B[i][j]);
        }
    }   
    for(int i=0;i<3;i++){
        for(int j=0; j<3; j++){
              C[i][j]=0;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<3; k++){
                C[i][j]+=A[i][k]*B[k][j];  
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0; j<3; j++){
               printf("%d",C[i][j]);  
               printf("\t");
        }
        printf("\n");
    }
}