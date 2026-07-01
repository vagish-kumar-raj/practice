// STRINGS IN C

#include <stdio.h>
#include <string.h>

int main() {

    // ---------------- STRING DECLARATION ----------------
    char str1[] = "Hello";        // automatically adds '\0'
    char str2[10] = "World";      // fixed size string

    // ---------------- STRING INPUT ----------------
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);            // reads single word (no spaces)

    // ---------------- PRINT STRING ----------------
    printf("Name = %s\n", name);

    // ---------------- STRING LENGTH ----------------
    int len = strlen(str1);       // length excluding '\0'
    printf("Length = %d\n", len);

    // ---------------- STRING COPY ----------------
    char copy[20];
    strcpy(copy, str1);           // copies str1 into copy

    // ---------------- STRING CONCATENATION ----------------
    char a[20] = "Hello ";
    char b[20] = "C";

    strcat(a, b);                 // joins strings
    printf("Concatenated = %s\n", a);

    // ---------------- STRING COMPARE ----------------
    int result = strcmp("abc", "abc");

    if (result == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    // ---------------- CHARACTER ACCESS ----------------
    char s[] = "Programming";
    printf("First char = %c\n", s[0]);

    // ---------------- INPUT WITH SPACES ----------------
    char full[50];
    printf("Enter full line: ");
    getchar();                    // clears buffer
    fgets(full, sizeof(full), stdin); // reads full line

    printf("Full input = %s\n", full);

    return 0;
}
// ---------------- KEY POINTS ----------------
// - Strings are char arrays ending with '\0'
// - scanf("%s") stops at space
// - Use fgets() for full line input
// - string.h library required for string functions