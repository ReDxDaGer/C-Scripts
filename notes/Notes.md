# Notes For C Language

## 1. Some Basic Stuff to know 
- In C, multiline comments begin with /* and end with */, and single-line comments begin with //.

- In C, libraries are included (imported) using #include. All #include statements appear at the top of the program, outside of function bodies.

- In C, blocks (for example, function, loop, and conditional bodies) start with { and end with }.

- In C, int main(void){ } defines the main function. The main function returns a value of type int, which is C’s name for specifying the signed integer type (signed integers are values like -3, 0, 1234). The main function returns the int value 0 to signify running to completion without error. The void means it doesn’t expect to receive a parameter. Future sections show how main can take parameters to receive command line arguments.

- In C, each statement ends with a semicolon ;. In C, statements must be within the body of some function (in main in this example).
--------------------------------------------------------------------
## 2.  Compiling and Running C Programs

- To run a C program, it must first be translated into a form that a computer system can directly execute. A C compiler is a program that translates C source code into a binary executable form that the computer hardware can directly execute. A binary executable consists of a series of 0’s and 1’s in a well-defined format that a computer can run.

    For example you have made a file named as hello.c (can be anything but must end with like <input_the_name>.c)

- For example, to run the C program hello.c on a Unix system, the C code must first be compiled by a C compiler (for example, the GNU C compiler, GCC) that produces a binary executable (by default named a.out). The binary executable version of the program can then be run directly on the system (Figure 2):

  ```bash
  gcc hello.c # this command is for Compiling the Code present in the file hello.c
  /a.out # This command displays the output of the code you wrote in hello.c
  ```
  ```C
        {
    /* 1. Define variables in this block's scope at the top of the block. */

    int x; // declares x to be an int type variable and allocates space for it

    int i, j, k;  // can define multiple variables of the same type like this

    char letter;  // a char stores a single-byte integer value
                  // it is often used to store a single ASCII character
                  // value (the ASCII numeric encoding of a character)
                  // a char in C is a different type than a string in C

    float winpct; // winpct is declared to be a float type
    double pi;    // the double type is more precise than float

    /* 2. After defining all variables, you can use them in C statements. */

    x = 7;        // x stores 7 (initialize variables before using their value)
    k = x + 2;    // use x's value in an expression

    letter = 'A';        // a single quote is used for single character value
    letter = letter + 1; // letter stores 'B' (ASCII value one more than 'A')

    pi = 3.1415926;

    winpct = 11 / 2.0; // winpct gets 5.5, winpct is a float type
    j = 11 / 2;        // j gets 5: int division truncates after the decimal
    x = k % 2;         // % is C's mod operator, so x gets 9 mod 2 (1) 
  }

  ```
 -----------------

## Tabel that represents the types and describes there storage

   | Type Name        | Usual Size  | Values Stored |
   | :---------------- | :------: | ----: |
   | char        |  1 byte   | integers |
   | short       |  2 bytes  | signed integers|
   | int         |  4 bytes  | signed integers |
   | long        |  4 or 8 bytes| signed integers|
   | long long   |  8 bytes  | signed integers|
   | float       |  8 bytes  |signed real numbers|

## Functions

- Functions break code into manageable pieces and reduce code duplication. Functions might take zero or more parameters as input and they return a single value of a specific type. A function declaration or prototype specifies the function’s name, its return type, and its parameter list (the number and types of all the parameters). A function definition includes the code to be executed when the function is called. All functions in C must be declared before they’re called. This can be done by declaring a function prototype or by fully defining the function before calling it:

  ```c
    // function definition format:
  // ---------------------------
  <return type> <function name> (<parameter list>)
  {
      <function body>
  }

  // parameter list format:
  // ---------------------
  <type> <param1 name>, <type> <param2 name>, ...,  <type> <last param name>
  ```

# Arrays  and Strings

- An array is a C construct that creates an ordered collection of data elements of the same type and associates this collection with a single program variable. Ordered means that each element is in a specific position in the collection of values (that is, there is an element in position 0, position 1, and so on), not that the values are necessarily sorted. Arrays are one of C’s primary mechanisms for grouping multiple data values and referring to them by a single name. Arrays come in several flavors, but the basic form is a one-dimensional array, which is useful for implementing list-like data structures and strings in C.


