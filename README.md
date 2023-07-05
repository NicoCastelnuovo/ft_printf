# ft_printf

ft_printf is a project developed for 42 Heilbroon School.

## Keywords
C programming - variadic functions - printf

## Subject
In this project I had to re-implement the printf function from the <stdio.h> library. The function handles the basic funcionalities and conversion specifiers'

## Brief Explanation
### 1. Input Parsing
Ensure the consistency of the input through meticulous validation functions. The project requirements specify that duplicates are not allowed. If the input is invalid at any step, the allocated memory is freed, and an error is returned.

### 2. Data Structure & Operations
I implemented circular linked lists to handle the list of integers. To fulfill the project requirements, the following operations are implemented: pop, push, rotate (shift up), reverse rotate (shift down), and swap of two elements. These operations serve as the foundation to sort the integers.

### 3. Adapting a Sorting Algorithm
In adapting the sorting algorithm for this project, I have chosen to implement the Radix Sort algorithm. To optimize the sorting process while staying within the constraints of the 2-stack requirement, I used bitwise operations and developed an indexing-based mapping approach.

## How to Use
1. Clone the repository inside your project:
`git clone git@github.com:NicoCastelnuovo/ft_printf.git ft_printf`

2. Navigate to the `ft_printf` directory and `make` the library:
`cd ft_printf`
`make`

3. Include the header inside your .c file:
`#include "ft_printf.h`

4. Compile your executable:
`cc <your_main.c> ./ft_printf/libftprintf.a -I ./ft_printf/include/ -o <custom_name>`
