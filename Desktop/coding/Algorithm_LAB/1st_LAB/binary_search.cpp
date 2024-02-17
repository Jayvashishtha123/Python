#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to perform binary search
int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the target is present at the middle
        if (arr[mid] == target)
            return mid;

        // If target greater, ignore the left half
        if (arr[mid] < target)
            left = mid + 1;

        // If target is smaller, ignore the right half
        else
            right = mid - 1;
    }

    // Target is not present in the array
    return -1;
}

int main() {
    int size, target;

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

    // Sort the array (binary search requires a sorted array)
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
printf("\n");
    printf("Enter the target element to search: ");
    scanf("%d", &target);

    // Measure the start time
    clock_t start_time = clock();

    // Perform binary search
    int result = binarySearch(arr, size, target);

    // Measure the end time
    clock_t end_time = clock();

    // Calculate the total time taken
    double total_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

    // Display the array elements
    
    printf("\n");

    // Display the result and total time taken
    if (result != -1)
        printf("Element found at index %d.\n", result);
    else
        printf("Element not found in the array.\n");

    printf("Total time taken: %f seconds\n", total_time);

    // Free dynamically allocated memory
    free(arr);

    return 0;
}
