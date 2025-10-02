#include <stdio.h>
void main(){
    int A[3][3],B[3][3],C[3][3],m,n,p,q,a,b;
    printf("Enter the number of rows and columns of matrix A:");
    scanf("%d%d",&m,&n);
    printf("Enter the number of rows and columns of matrix B:");
    scanf("%d%d",&p,&q);
    if(n!=p){
        printf("Multiplication of the following matrix is not possible! ");
    }else{
    printf("Enter the elements of the array A:");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&A[i][j]);
        }
    }
     printf("Enter the elements of the array B:");
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            scanf("%d",&B[i][j]);
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            C[i][j]=0;
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
           for(int k=0; k<n; k++){
            C[i][j]+=A[i][k]*B[k][j];
           }
        }
    }
    printf("The multiplication of matrix A and B is = \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
           printf("%d",C[i][j]);
           printf("\t");

        }
        printf("\n");
    }

    }
}