#include <stdio.h>

int main() {
    // File pointer
    FILE *file;

    // File path (replace "example.txt" with your file path)
    const char *filePath = "vardhan.txt";

    // Open the file in read mode
    file = fopen(filePath, "r");

    // Check if the file was successfully opened
    if (file == NULL) {
        printf("Could not open file %s for reading.\n", filePath);
        return 1; // Return an error code
    }

    // Read and print the contents of the file
    char buffer[100]; // Buffer to store read data
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    // Close the file
    fclose(file);

    return 0; // Return 0 to indicate success
}
