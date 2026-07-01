// VARIABLES AND CONSTANTS IN C

#include <stdio.h>

int main() {

    // ---------------- VARIABLES ----------------
    int a = 10;              // variable: value can be changed
    float b = 3.14f;         // stores decimal value
    char c = 'A';            // stores single character

    a = 20;                  // variable value updated
    b = 5.67f;

    // RULES FOR VARIABLES
    int _x = 5;              // can start with underscore
    int x1 = 10;             // can contain numbers (not at start)
    // int 1x = 10;          // ❌ invalid: cannot start with digit

    // VARIABLES ARE CASE-SENSITIVE
    int value = 10;
    int Value = 20;          // different variable

    // ---------------- CONSTANTS ----------------

    // METHOD 1: const keyword
    const int MAX = 100;     // cannot be modified
    // MAX = 200;            // ❌ error: read-only constant

    // METHOD 2: #define preprocessor
    #define PI 3.14159       // symbolic constant (no memory allocation)

    // USAGE
    float area = PI * 2 * 2;

    // CHARACTER CONSTANTS
    const char grade = 'A';  // constant character

    // STRING CONSTANT (read-only literal)
    char *msg = "Hello";     // stored in read-only memory

    // DIFFERENCE SUMMARY
    // variable: value can change during execution
    // constant: value cannot change after definition

    printf("a = %d\n", a);
    printf("PI = %f\n", PI);
    printf("area = %f\n", area);

    return 0;
}