Here are your short notes formatted into clean, scannable Markdown:

---

# Command Line Compilation in C

### Basic GCC Compilation

```bash
gcc program.c -o program

```

* This compiles `program.c` into an executable named `program`.

**Running the compiled program:**

* **Linux / Mac:** `./program`
* **Windows:** `program.exe`

---

### Step-by-Step Compilation Process

1. **Preprocessing** $\rightarrow$ Expands `#include`, `#define`, and macros.
2. **Compilation** $\rightarrow$ Converts C code into assembly language.
3. **Assembly** $\rightarrow$ Converts assembly code into machine code (object `.o` file).
4. **Linking** $\rightarrow$ Combines object files, links libraries (like `stdio`), and creates the final executable.

> **Execution Flow:** > Source (`.c`) $\rightarrow$ Preprocessor $\rightarrow$ Compiler $\rightarrow$ Assembler $\rightarrow$ Linker $\rightarrow$ Executable

---

### Common GCC Flags

| Flag | Description | Example |
| --- | --- | --- |
| `-Wall` | Enables all common compiler warnings | `gcc -Wall program.c` |
| `-Werror` | Treats all warnings as hard errors | `gcc -Werror program.c` |
| `-g` | Adds debugging information (for GDB) | `gcc -g program.c` |
| `-O2` | Optimizes the code for performance (Level 2) | `gcc -O2 program.c` |
| `-o [name]` | Sets the custom output filename | `gcc -o output program.c` |

---

### Multi-File Compilation

#### 1. All-in-One Method

Compiles multiple source files together into a single executable in one command:

```bash
gcc main.c utils.c -o app

```

#### 2. Separate Compilation (Best Practice for Large Projects)

Compiles source files into intermediate object files first, then links them together:

```bash
# Step 1: Compile to object files (.o)
gcc -c main.c
gcc -c utils.c

# Step 2: Link object files into the final executable
gcc main.o utils.o -o app

```

---

### Key Points to Remember

* **GCC** stands for **GNU Compiler Collection**.
* The final output file consists of **executable machine code**.
* Errors can happen at different stages: **compile-time errors** (syntax, type mismatches) or **linking errors** (missing function definitions).

---

### Quick Start Example

```bash
gcc hello.c -o hello
./hello

```