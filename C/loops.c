// LOOPS IN C

#include <stdio.h>

int main() {

    // ---------------- FOR LOOP ----------------
    // used when number of iterations is known

    for (int i = 1; i <= 5; i++) {
        // initialization; condition; increment/decrement
        printf("For loop i = %d\n", i);
    }

    // ---------------- WHILE LOOP ----------------
    // used when condition-based repetition is needed

    int a = 1;

    while (a <= 5) {
        printf("While loop a = %d\n", a);
        a++;   // must update condition variable
    }

    // ---------------- DO-WHILE LOOP ----------------
    // executes at least once

    int b = 1;

    do {
        printf("Do-While b = %d\n", b);
        b++;
    } while (b <= 5);

    // ---------------- NESTED LOOP ----------------
    // loop inside another loop

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("i=%d j=%d\n", i, j);
        }
    }

    // ---------------- INFINITE LOOP (concept) ----------------
    // for(;;) {
    //     // runs forever
    // }

    // ---------------- BREAK IN LOOP ----------------
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;   // exits loop completely
        }
        printf("Break demo i = %d\n", i);
    }

    // ---------------- CONTINUE IN LOOP ----------------
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue;  // skips even numbers
        }
        printf("Odd number i = %d\n", i);
    }

    return 0;
}