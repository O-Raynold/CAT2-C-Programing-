//a a program that reads a list of integers from a file and processes the integers in a different file
/*
Name: Raynold Ongaki
Reg no:PA106/G/28820/25
Description : WRITING A PROGRAM TO READ A FILE AND PROCESSING IT IN A DIFFERENT FILE 
*/
#include <stdio.h>
void openingFile() {
    FILE *file = fopen("input.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }
    int num;
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        fprintf(file, "%d\n", num);
    }
    fclose(file);
}

void calculateSumAverage() {
    FILE *file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Error opening input.txt for reading.\n");
        return;
    }
    int num, sum = 0, count = 0;
    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(file);

    if (count == 0) {
        printf("No numbers found in input.txt.\n");
        return;
    }

    double average = (double)sum / count;

    file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Error opening output.txt for writing.\n");
        return;
    }
    fprintf(file, "Sum = %d\nAverage = %.2f\n", sum, average);
    fclose(file);
}

void displayFiles() {
    char ch;
    FILE *file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Error opening input.txt for reading.\n");}
        return;
    }
    
    