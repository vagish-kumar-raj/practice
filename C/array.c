// ARRAYS IN C (COMPLETE SHORT NOTES)

#include <stdio.h>

int main() {

    // ---------------- 1D ARRAY ----------------
    int arr[5] = {10, 20, 30, 40, 50};  // fixed size array

    // accessing elements using index (starts from 0)
    printf("arr[0] = %d\n", arr[0]);
    printf("arr[2] = %d\n", arr[2]);

    // modifying array element
    arr[1] = 25;

    // printing full array using loop
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    // ---------------- ARRAY INPUT ----------------
    int n[3];

    for (int i = 0; i < 3; i++) {
        scanf("%d", &n[i]);   // input elements
    }

    // ---------------- 2D ARRAY (MATRIX) ----------------
    int matrix[2][2] = {
        {1, 2},
        {3, 4}
    };

    // accessing 2D array
    printf("matrix[0][1] = %d\n", matrix[0][1]);

    // printing 2D array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // ---------------- CHARACTER ARRAY (STRING) ----------------
    char str[] = "Hello";   // string stored as char array

    printf("%s\n", str);

    // manual character access
    printf("First char = %c\n", str[0]);

    // ---------------- KEY POINTS ----------------
    // - Array stores same type of elements
    // - Index starts from 0
    // - Fixed size in C (no dynamic resizing)
    // - Stored in contiguous memory locations

    return 0;
}