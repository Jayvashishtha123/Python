/* A Naive recursive implementation of 0-1 Knapsack problem */
#include <iostream> 
#include<time.h>
#include<stdlib.h>
using namespace std; 

// A utility function that returns 
// maximum of two integers 
// int max(int a, int b) { return (a > b) ? a : b; } 

// Returns the maximum value that....................
// can be put in a knapsack of capacity W ...........
int knapSack(int W, int wt[], int val[], int n) 
{ 

	// Base Case 
	if (n == 0 || W == 0) 
		return 0; 

	
	if (wt[n - 1] > W) 
		return knapSack(W, wt, val, n - 1); 

	// Return the maximum of two cases: 
	// (1) nth item included 
	// (2) not included 
	else
		return max( 
			val[n - 1] 
				+ knapSack(W - wt[n - 1], wt, val, n - 1), 
			knapSack(W, wt, val, n - 1)); 
} 
//...................Driver code.........................
int main() 

{ 
    int n;
    printf("Enter the size of array:");
     scanf("%d",&n);
	int profit[n] ; 
    for(int i=0;i<n;i++){
         profit[i]=rand()%100;
     }
     sort(profit,profit+n);
    
	int weight[n] ; 
    for(int i=0;i<n;i++){
         weight[i]=rand()%100;
     }
     sort(weight,weight+n);
     int sum=0;

     printf("The profit array is: [");
    
     for(int i=0;i<n;i++){
         printf("%d,",profit[i]);
     }
      printf("]\n");
      printf("The weight array is: [");
    
     for(int i=0;i<n;i++){
         printf("%d,",weight[i]);
     }
      printf("]\n");
	int W ;
    printf("Enter the size of knapsack:   ");
    scanf("%d",&W); 
    for(int i=0;i<n;i++){
        sum += weight[i];
    }
    if(W>sum){
        printf("...Pls Enter less size of knapsack..");
        return -1;
    }
	int x = sizeof(profit) / sizeof(profit[0]); 
    clock_t begin = clock();
	cout << knapSack(W, weight, profit, x); 
     clock_t end = clock();
     double time = (double)(end - begin)/CLOCKS_PER_SEC;
     printf("\nTime is: %lf",time);
	return 0; 
} 

// This code is contributed by rathbhupendra
