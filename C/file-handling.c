// FILE HANDLING IN C

#include <stdio.h>

int main() {

    // ---------------- FILE POINTER ----------------
    FILE *fp;   // file pointer used to handle files

    // ---------------- WRITE TO FILE ----------------
    fp = fopen("data.txt", "w");  
    // "w" mode: write (creates file or overwrites existing)

    if (fp == NULL) {
        printf("File creation failed\n");
        return 1;
    }

    fprintf(fp, "Hello File Handling\n");  // write formatted text
    fprintf(fp, "C Programming\n");

    fclose(fp);  // close file (important)

    // ---------------- APPEND TO FILE ----------------
    fp = fopen("data.txt", "a");  
    // "a" mode: append (adds data at end)

    fprintf(fp, "Appending new line\n");
    fclose(fp);

    // ---------------- READ FROM FILE ----------------
    fp = fopen("data.txt", "r");  
    // "r" mode: read file

    if (fp == NULL) {
        printf("File not found\n");
        return 1;
    }

    char ch;

    // reading character by character
    printf("File content:\n");
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);

    // ---------------- OTHER FILE FUNCTIONS ----------------
    // fputc()  -> write single character
    // fgetc()  -> read single character
    // fgets()  -> read string/line
    // fputs()  -> write string

    // ---------------- FILE MODES ----------------
    // "r"  -> read
    // "w"  -> write (overwrite)
    // "a"  -> append
    // "r+" -> read + write
    // "w+" -> write + read
    // "a+" -> append + read

    // ---------------- KEY POINTS ----------------
    // - FILE * is required for file operations
    // - Always use fopen() before and fclose() after
    // - Always check for NULL after fopen()
    // - File handling works in text and binary modes

    return 0;
}