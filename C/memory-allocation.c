// MEMORY ALLOCATION IN C

#include <stdio.h>
#include <stdlib.h>   // required for malloc, calloc, realloc, free

int main() {

    // ---------------- STATIC MEMORY (FIXED SIZE) ----------------
    int arr[5] = {1, 2, 3, 4, 5};  
    // memory allocated at compile time (stack)

    // ---------------- DYNAMIC MEMORY ALLOCATION ----------------
    // memory allocated at runtime (heap)

    // ---------------- malloc() ----------------
    int *p = (int*) malloc(5 * sizeof(int));
    // allocates memory for 5 integers (uninitialized)

    if (p == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // assigning values
    for (int i = 0; i < 5; i++) {
        p[i] = i + 1;
    }

    // printing values
    for (int i = 0; i < 5; i++) {
        printf("%d ", p[i]);
    }

    printf("\n");

    // ---------------- calloc() ----------------
    int *c = (int*) calloc(5, sizeof(int));
    // allocates and initializes memory to 0

    for (int i = 0; i < 5; i++) {
        printf("%d ", c[i]);   // prints 0
    }

    printf("\n");

    // ---------------- realloc() ----------------
    p = (int*) realloc(p, 10 * sizeof(int));
    // resizes previously allocated memory

    for (int i = 5; i < 10; i++) {
        p[i] = i + 1;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", p[i]);
    }

    printf("\n");

    // ---------------- free() ----------------
    free(p);   // releases heap memory
    free(c);

    // ---------------- KEY POINTS ----------------
    // malloc  -> allocates uninitialized memory
    // calloc  -> allocates + initializes to 0
    // realloc -> resizes memory block
    // free    -> deallocates memory
    // heap memory must be freed manually

    return 0;
}