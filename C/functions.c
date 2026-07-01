// FUNCTIONS IN C

#include <stdio.h>

// ---------------- FUNCTION DECLARATION (PROTOTYPE) ----------------
int add(int a, int b);   // tells compiler function exists

// ---------------- USER-DEFINED FUNCTION ----------------
int add(int a, int b) {  // function definition
    return a + b;        // returns sum
}

// ---------------- VOID FUNCTION (NO RETURN VALUE) ----------------
void greet() {
    printf("Hello!\n");
}

// ---------------- FUNCTION WITH NO PARAMETERS ----------------
void showMessage() {
    printf("Welcome to C programming\n");
}

// ---------------- MAIN FUNCTION ----------------
int main() {

    // function call
    int result = add(10, 20);
    printf("Sum = %d\n", result);

    greet();          // calling void function
    showMessage();    // calling no-argument function

    return 0;
}

/*
---------------- FUNCTION TYPES SUMMARY ----------------

1. No argument, no return value
   void func() {}

2. No argument, return value
   int func() { return value; }

3. Argument, no return value
   void func(int x) {}

4. Argument, return value
   int func(int x) { return x; }

---------------- KEY POINTS ----------------
- Function improves code reusability
- Must be declared before use (or prototype used)
- Execution happens only when function is called
- return sends value back to caller
*/