# C Pointer Error: Printing Address Instead of Value
This example demonstrates a common error in C programming related to pointers. The code attempts to print the value of an integer variable using a pointer, but it incorrectly prints the memory address of the pointer instead. 

## Bug Description
The `printf` function is misused. Instead of dereferencing the pointer `ptr` to get the value of the integer, it directly prints the pointer's memory address.

## Solution
The solution involves using the dereference operator `*` before `ptr` in the `printf` statement to access the value stored at the memory location pointed to by `ptr`.