#include <stdio.h>
void main(){
 int a[3][3],b[3][3];
 printf("Enter 9 elements of matrix A:");
 for (int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        scanf("%d",&a[i][j]);
    }
 }
 printf("The matrix A is = \n");
 for (int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        printf("%d",a[i][j]);
        printf("\t");
    }
    printf("\n");
 }
 for (int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        b[i][j]=a[i][j];
    }
 }
 printf("The transpose of matrix A is=\n");
 for (int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        printf("%d",b[j][i]);
        printf("\t");
    }
    printf("\n");
 }

}