// CONTROL FLOW IN C

#include <stdio.h>

int main() {

    int a = 10, b = 20;

    // ---------------- IF STATEMENT ----------------
    if (a < b) {
        // executes if condition is true
        printf("a is smaller than b\n");
    }

    // ---------------- IF-ELSE ----------------
    if (a > b) {
        printf("a is greater\n");
    } else {
        printf("b is greater or equal\n");
    }

    // ---------------- IF-ELSE LADDER ----------------
    int marks = 75;

    if (marks >= 90) {
        printf("Grade A\n");
    } else if (marks >= 75) {
        printf("Grade B\n");
    } else if (marks >= 50) {
        printf("Grade C\n");
    } else {
        printf("Fail\n");
    }

    // ---------------- NESTED IF ----------------
    int age = 20;
    int hasID = 1;

    if (age >= 18) {
        if (hasID) {
            printf("Allowed entry\n");
        } else {
            printf("ID required\n");
        }
    }

    // ---------------- SWITCH CASE ----------------
    int day = 3;

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Invalid day\n");
    }

    // ---------------- BREAK STATEMENT ----------------
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            break;  // exits loop
        }
        printf("%d\n", i);
    }

    // ---------------- CONTINUE STATEMENT ----------------
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;  // skips current iteration
        }
        printf("%d\n", i);
    }

    // ---------------- GOTO STATEMENT ----------------
    int x = 1;

    if (x == 1) {
        goto label;   // jumps to label
    }

    printf("This will be skipped\n");

label:
    printf("Jumped using goto\n");

    return 0;
}