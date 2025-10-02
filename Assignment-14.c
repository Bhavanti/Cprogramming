#include <stdio.h>
void main(){
    int a[2][3][4]={
       
            1,2,3,4,6,8,9,7,5,10,11,12,21,50,30,40,20,60,70,80,14,16,18,22
    };
    printf("The elements of the array are: \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<4; k++){
                printf("%d",a[i][j][k]);
                printf("\t");

            }
             printf("\n");
        }
       
    }
}