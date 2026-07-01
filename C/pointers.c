// POINTERS IN C (CORE CONCEPT - COMPLETE SHORT NOTES)

#include <stdio.h>

int main() {

    // ---------------- BASIC POINTER ----------------
    int x = 10;        // normal variable
    int *p = &x;       // pointer stores address of x

    printf("Value of x = %d\n", x);
    printf("Address of x = %p\n", &x);
    printf("Pointer p = %p\n", p);
    printf("Value using pointer = %d\n", *p);  // dereferencing

    // ---------------- POINTER UPDATE VALUE ----------------
    *p = 20;           // changes value of x through pointer
    printf("Updated x = %d\n", x);

    // ---------------- NULL POINTER ----------------
    int *ptr = NULL;   // pointer points to nothing safely

    if (ptr == NULL) {
        printf("Pointer is NULL\n");
    }

    // ---------------- POINTER TYPES ----------------
    char c = 'A';
    char *cp = &c;     // char pointer

    float f = 3.14;
    float *fp = &f;    // float pointer

    // ---------------- POINTER ARITHMETIC ----------------
    int arr[3] = {10, 20, 30};
    int *ap = arr;     // points to first element

    printf("arr[0] = %d\n", *ap);
    printf("arr[1] = %d\n", *(ap + 1));  // pointer arithmetic
    printf("arr[2] = %d\n", *(ap + 2));

    // ---------------- POINTER AND ARRAY RELATION ----------------
    // arr == &arr[0]
    // *arr gives first element

    // ---------------- POINTER TO POINTER ----------------
    int y = 50;
    int *p1 = &y;
    int **p2 = &p1;    // pointer to pointer

    printf("Value using **p2 = %d\n", **p2);

    // ---------------- VOID POINTER ----------------
    void *vp;
    vp = &x;           // can store any type address

    printf("Value via void pointer = %d\n", *(int*)vp);

    // ---------------- KEY POINTS ----------------
    // - Pointer stores memory address
    // - * is used to access value (dereferencing)
    // - & gives address
    // - Powerful for memory control and arrays

    return 0;
}