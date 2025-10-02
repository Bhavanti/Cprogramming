
#include <stdio.h>
 void main(){
     int a[20],n, S=0;
     float avg;
     printf("Specify the size of the array:");
     scanf("%d",&n);
     printf("Enter elements to an array");
     for( int i=0; i<n; i++){
         scanf("%d",&a[i]);
        
     }
      for( int i=0; i<n; i++){
        S=S+a[i];
        avg=S/n;
     }
       printf("The sum of the elements of the array is=%d and the average of the elememts in the array is = %f ",S,avg);

  }