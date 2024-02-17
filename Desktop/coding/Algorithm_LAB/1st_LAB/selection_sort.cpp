#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to perform selection sort on an array
void selectionSort(int arr[], int size) {
    int i, j, min_idx;

    // One by one move the boundary of the unsorted subarray
    for (i = 0; i < size - 1; i++) {
        // Find the minimum element in the unsorted array
        min_idx = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        // Swap the found minimum element with the first element
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Dynamically allocate memory for the array
    int *arr = (int *)malloc(size * sizeof(int));

    // Seed for random number generation
    srand(time(NULL));

    // Initialize array with random values
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100; // Generates random numbers between 0 and 99
    }

    // Measure the start time
    clock_t start_time = clock();

    // Perform selection sort
    selectionSort(arr, size);

    // Measure the end time
    clock_t end_time = clock();

    // Calculate the total time taken
    double total_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

    // Display the sorted array elements
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Display the total time taken
    printf("Total time taken: %f seconds\n", total_time);

    // Free dynamically allocated memory
    free(arr);

    return 0;
}
