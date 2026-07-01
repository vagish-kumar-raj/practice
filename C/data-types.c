#include <stdio.h>

// VOID TYPE
    void func() { 
        // void: represents no return value used for functions that return nothing; C does NOT allow function inside function
    }

int main() {
    // DATA TYPES IN C (COMPREHENSIVE SHORT NOTES)

    // PRIMARY DATA TYPES
    int a = 10; // integer type: stores whole numbers
    char c = 'A'; // character type: stores single character (ASCII)
    float f = 3.14f; // floating point: single precision decimal number
    double d = 3.141592; // double: double precision decimal number (more accurate)

    // TYPE MODIFIERS
    short int s = 100; // smaller range integer (uses less memory)
    long int l = 100000L; // larger range integer
    unsigned int u = 50; // only positive integers (no negative values)

    // DERIVED DATA TYPES
    int arr[5] = {1,2,3,4,5}; // array: collection of same data type
    char str[] = "Hello"; // string: character array ending with '\0'

    // POINTER DATA TYPE
    int x = 10;
    int *p = &x; // pointer: stores address of variable

    // USER-DEFINED DATA TYPE (STRUCTURE)
    struct Student { // structure: groups different data types
        int id;
        char name[20];
        float marks;
    };

    // ENUMERATION TYPE
    enum Day {Mon, Tue, Wed}; // enum: named integer constants

    // CONSTANT USAGE WITH TYPES
    const int MAX = 100;      // constant integer value cannot be changed
    
    return 0;
}