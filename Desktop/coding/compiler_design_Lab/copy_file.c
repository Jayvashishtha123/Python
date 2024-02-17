#include <stdio.h>
int main() {
    // File pointers
    FILE *inputFile, *outputFile;
    // File paths (replace "input.txt" and "output.txt" with your file paths)
    const char *inputFilePath = "jay.txt";
    const char *outputFilePath = "vardhan.txt";
    // Open the input file in read mode
    inputFile = fopen(inputFilePath, "r");
    // Check if the input file was successfully opened
    if (inputFile == NULL) {
        printf("Could not open input file %s for reading.\n", inputFilePath);
        return 1; // Return an error code
    }
    // Open the output file in write mode
    outputFile = fopen(outputFilePath, "w");
    // Check if the output file was successfully opened
    if (outputFile == NULL) {
        printf("Could not open output file %s for writing.\n", outputFilePath);
        fclose(inputFile); // Close the input file
        return 1; // Return an error code
    }
    // Read and write the contents of the input file to the output file character by character
    int character;

    while ((character = fgetc(inputFile)) != EOF) {
        fputc(character, outputFile);
    }
    // Close the files
    fclose(inputFile);
    fclose(outputFile);

    printf("File copied successfully.\n");

    return 0; // Return 0 to indicate success
}
