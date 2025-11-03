// a program to print out scores in a loop 
/*
Name : Raynold Ongaki
Reg no:PA106/G/28820/25
Description :a program using loop to outline various  scores
*/
#include <stdio.h>

int main() {
    // i. A  array is a data structure in C language that stores a fixed-sized,   collection of elements of the same data type.
    
    // ii. Declare and initialize the 2D array
    int scores[2][4] = {
        {65, 92, 35, 70},
        {84, 72, 59, 67}
    };

    // iii. Print the elements using nested for loop
    printf("Elements of the array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}
