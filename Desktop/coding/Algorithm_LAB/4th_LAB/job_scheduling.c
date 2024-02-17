#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct Job {
	char id; 
	int dead; 
	int profit; 
} Job;
int compare(const void* a, const void* b)
{
	Job* temp1 = (Job*)a;
	Job* temp2 = (Job*)b;
	return (temp2->profit - temp1->profit);
}

int min(int num1, int num2)
{
	return (num1 > num2) ? num2 : num1;
}

void printJobScheduling(Job arr[], int n)
{
	qsort(arr, n, sizeof(Job), compare);

	int result[n]; 
	bool slot[n]; 

	for (int i = 0; i < n; i++)
		slot[i] = false;

	for (int i = 0; i < n; i++) {
		for (int j = min(n, arr[i].dead) - 1; j >= 0; j--) {
		
			if (slot[j] == false) {
				result[j] = i; 
				slot[j] = true; 
				break;
			}
		}
	}
    int sum=0;

	for (int i = 0; i < n; i++){
		if (slot[i]){
			printf(" %c ", arr[result[i]].id);
            sum += arr[result[i]].profit;
        }
    }
    printf("\nThe total profit is: %d",sum);
}

int main()
{
	Job arr[] = { { 'a', 2, 40 },
				{ 'b', 2, 15 },
				{ 'c', 1, 25 }};
	int n = sizeof(arr) / sizeof(arr[0]);
	printf(
		"Following is maximum profit sequence of jobs \n");
	printJobScheduling(arr, n);
	return 0;
}