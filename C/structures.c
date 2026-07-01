// STRUCTURES IN C

#include <stdio.h>
#include <string.h>

// ---------------- STRUCTURE DECLARATION ----------------
struct Student {
    int id;           // integer member
    char name[20];    // string member
    float marks;      // float member
};   // semicolon is mandatory

int main() {

    // ---------------- STRUCTURE VARIABLE ----------------
    struct Student s1;

    // ---------------- ACCESSING MEMBERS ----------------
    s1.id = 101;
    strcpy(s1.name, "Alex");
    s1.marks = 85.5;

    printf("ID = %d\n", s1.id);
    printf("Name = %s\n", s1.name);
    printf("Marks = %.2f\n", s1.marks);

    // ---------------- STRUCTURE INITIALIZATION ----------------
    struct Student s2 = {102, "John", 90.0};

    printf("ID = %d, Name = %s, Marks = %.2f\n",
           s2.id, s2.name, s2.marks);

    // ---------------- ARRAY OF STRUCTURES ----------------
    struct Student class[2] = {
        {201, "A", 78.0},
        {202, "B", 88.0}
    };

    for (int i = 0; i < 2; i++) {
        printf("%d %s %.2f\n",
               class[i].id,
               class[i].name,
               class[i].marks);
    }

    // ---------------- POINTER TO STRUCTURE ----------------
    struct Student *ptr = &s1;

    printf("Using pointer: %d %s %.2f\n",
           ptr->id,        // arrow operator
           ptr->name,
           ptr->marks);

    // ---------------- NESTED STRUCTURE ----------------
    struct Address {
        char city[20];
        int pin;
    };

    struct Employee {
        int empId;
        struct Address addr;  // nested structure
    };

    struct Employee e1;
    e1.empId = 1;
    strcpy(e1.addr.city, "Delhi");
    e1.addr.pin = 110001;

    printf("City = %s, PIN = %d\n",
           e1.addr.city, e1.addr.pin);

    // ---------------- KEY POINTS ----------------
    // - Structure groups different data types
    // - Access using dot (.)
    // - Pointer access using arrow (->)
    // - Used for real-world data modeling

    return 0;
}