#include <stdio.h>
#include<time.h>
#include<stdlib.h>
int main() {
     int n,i,j;
     clock_t begin = clock();
     printf("Enter the size of array:");
     scanf("%d",&n);
     int arr[n];
     int x;
     
     for(i=0;i<n;i++){
         arr[i]=rand()%100;
     }
     printf("The array is: [");
    
     for(i=0;i<n;i++){
         printf("%d,",arr[i]);
     }
     printf("]");
     printf("\nEnter the number to search:");
     scanf("%d",&x);
     printf("\n");
     bool ans = false;
     for(j=0;j<n;j++){
         if(arr[j]==x){
             ans=true;
             printf("Element is at index: %d\n",j);
         }
     }
     if(!ans){
         printf("The element is not present\n");
     }
    clock_t end = clock();
     double time = (double)(end - begin)/CLOCKS_PER_SEC;
     printf("Time is: %lf",time);
    return 0;
}