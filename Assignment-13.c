#include <stdio.h>
void main(){
    int a[3][2]={
        1,2,3,6,9,8
    };
    printf("The elements of the array are: \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            printf("%d",a[i][j]);
            printf("\t");
        }
         printf("\n");
    }
    
}