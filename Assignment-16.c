#include <stdio.h>
void main(){
    int a[2][2],b[2][2],c[2][2];
    printf("Enter 4 elements for matrix A:");
    for (int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d",&a[i][j]);
        }
    }
   
     printf("Enter 4 elements for matrix B:");
    for (int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d",&b[i][j]);
        }
    }
   
    
    for (int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
     printf("The sum of matrix A and B is:\n");
     for (int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d",c[i][j]);
            printf("\t");
        }
        printf("\n");
    }

}