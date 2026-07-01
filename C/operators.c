// OPERATORS IN C

#include <stdio.h>

int main() {

    // ---------------- ARITHMETIC OPERATORS ----------------
    int a = 10, b = 3;

    int sum = a + b;      // addition
    int diff = a - b;     // subtraction
    int mul = a * b;      // multiplication
    int div = a / b;      // integer division (gives quotient)
    int mod = a % b;      // modulus (remainder)

    // ---------------- RELATIONAL OPERATORS ----------------
    // result is 1 (true) or 0 (false)

    int r1 = (a == b);    // equal to
    int r2 = (a != b);    // not equal to
    int r3 = (a > b);     // greater than
    int r4 = (a < b);     // less than
    int r5 = (a >= b);    // greater than or equal to
    int r6 = (a <= b);    // less than or equal to

    // ---------------- LOGICAL OPERATORS ----------------
    int x = 1, y = 0;

    int and_op = (x && y);  // logical AND (true if both true)
    int or_op  = (x || y);  // logical OR (true if any one true)
    int not_op = (!x);      // logical NOT (inverts value)

    // ---------------- ASSIGNMENT OPERATORS ----------------
    int c = 10;

    c = c + 5;   // normal assignment
    c += 5;      // shorthand add
    c -= 2;      // shorthand subtract
    c *= 2;      // shorthand multiply
    c /= 2;      // shorthand divide
    c %= 3;      // shorthand modulus

    // ---------------- INCREMENT / DECREMENT ----------------
    int i = 5;

    i++;         // post-increment (use then increase)
    ++i;         // pre-increment (increase then use)

    i--;         // post-decrement
    --i;         // pre-decrement

    // ---------------- BITWISE OPERATORS ----------------
    int p = 5, q = 3;

    int and_bit = p & q;   // bitwise AND
    int or_bit  = p | q;   // bitwise OR
    int xor_bit = p ^ q;   // bitwise XOR
    int left    = p << 1;  // left shift (multiply by 2)
    int right   = p >> 1;  // right shift (divide by 2)

    // ---------------- CONDITIONAL (TERNARY) OPERATOR ----------------
    int max = (a > b) ? a : b;  // condition ? true : false

    // OUTPUT (example)
    printf("Sum = %d\n", sum);
    printf("Max = %d\n", max);

    return 0;
}