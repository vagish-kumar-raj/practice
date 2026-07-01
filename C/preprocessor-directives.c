// PREPROCESSOR DIRECTIVES IN C

#include <stdio.h>   // includes standard library header before compilation

// ---------------- MACRO CONSTANTS ----------------
#define PI 3.14159
#define MAX 100

// ---------------- MACRO FUNCTION ----------------
#define SQUARE(x) ((x) * (x))   // macro behaves like inline function

// ---------------- CONDITIONAL COMPILATION ----------------
#define DEBUG 1

int main() {

    // ---------------- USING MACROS ----------------
    float r = 5;

    float area = PI * r * r;   // uses macro constant
    printf("Area = %.2f\n", area);

    int x = 4;
    printf("Square = %d\n", SQUARE(x));  // macro function

    // ---------------- CONDITIONAL DIRECTIVES ----------------

    #ifdef DEBUG
        printf("Debug mode is ON\n");   // compiled only if DEBUG is defined
    #endif

    #ifndef RELEASE
        printf("Release mode not defined\n");
    #endif

    // ---------------- #if / #elif / #else ----------------
    #if MAX > 50
        printf("MAX is greater than 50\n");
    #else
        printf("MAX is 50 or less\n");
    #endif

    // ---------------- OTHER PREPROCESSORS ----------------
    // #undef PI        -> undefines macro
    // #include         -> includes header files
    // #define          -> defines macros
    // #ifdef / #ifndef -> conditional compilation

    // ---------------- KEY POINTS ----------------
    // - Processed before compilation
    // - No memory allocation for macros
    // - Used for constants, code control, optimization

    return 0;
}