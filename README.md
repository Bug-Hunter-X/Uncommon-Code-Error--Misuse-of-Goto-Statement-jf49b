# Uncommon C Code Error: Misuse of Goto

This repository demonstrates a common but avoidable error in C programming: the misuse of the `goto` statement.  The `goto` statement, while functional, often leads to unstructured and difficult-to-understand code, especially in larger programs.  It's considered bad practice in modern programming.

The `bug.c` file shows an example of how `goto` can lead to poor code readability and maintainability.

The `bugSolution.c` file demonstrates how to improve the code by removing the `goto` statement, making the program more structured and easier to understand.

## How to Run the Code

1.  Clone this repository.
2.  Compile the code using a C compiler (like GCC):
    ```bash
    gcc bug.c -o bug
    gcc bugSolution.c -o bugSolution
    ```
3.  Run the executables:
    ```bash
    ./bug
    ./bugSolution
    ```