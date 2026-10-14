# Unit 2 - Assignment 3

This folder contains the C programming exercises from **Unit 2 - Assignment 3** of the Mastering Embedded Systems Diploma.

## 📌 Exercises

### Arrays

| Exercise | Description |
|---|---|
| EX_1 | Add two 2x2 matrices |
| EX_2 | Calculate the average of a set of numbers |
| EX_3 | Calculate and display the transpose of a matrix |
| EX_4 | Insert an element at a specified location in an array |
| EX_5 | Search for an element in an array |

### Strings

| Exercise | Description |
|---|---|
| EX_1 | Count the frequency of a character in a string |
| EX_2 | Calculate the length of a string |
| EX_3 | Reverse a string |

### Break and Continue Statements

| Exercise | Description |
|---|---|
| EX_1 | Calculate the average of non-negative numbers using `break` to stop input when a negative number is entered |
| EX_2 | Multiply four numbers while using `continue` to skip zero values |

## ▶️ Sample Input and Output

### Arrays — EX_1: Add Two 2x2 Matrices

```text
Enter the elements of first matrix:
Enter a11: 1
Enter a12: 2
Enter a21: 3
Enter a22: 4

Enter the elements of secound matrix:
Enter b11: 5
Enter b12: 6
Enter b21: 7
Enter b22: 8

Sum of Matrix:
6.0     8.0
10.0    12.0
```

### Arrays — EX_2: Average of a Set of Numbers

```text
Enter the numbers of data: 3
Enter number: 2
Enter number: 4
Enter number: 6
Average = 4.00
```

### Arrays — EX_3: Transpose a Matrix

```text
Enter rows and columns of matrix: 2 3

Enter elements of matrix:
Enter an element a11: 1
Enter an element a12: 8
Enter an element a13: 4
Enter an element a21: 9
Enter an element a22: 0
Enter an element a23: 7

Entered matrix:
1       8       4

9       0       7

Transposed matrix:
1       9

8       0

4       7
```

### Arrays — EX_4: Insert an Element into an Array

```text
Enter no of elements: 4
Enter the elements: 10 20 30 40
Enter the element to be inserted: 25
Enter the location: 3
The new array: 10 20 25 30 40
```

### Arrays — EX_5: Search for an Element

```text
Enter no of elements: 4
Enter the elements of the array: 5 12 8 20
Enter the element to be searched: 8
Number found at location: 3
```

### Strings — EX_1: Character Frequency

```text
Enter a string: embedded systems
enter a character to find frequency: e
Frequency of e = 3
```

### Strings — EX_2: String Length

```text
Enter a string: hello
Length of string: 5
```

### Strings — EX_3: Reverse a String

```text
Enter the string: hello
Reverse string is: olleh
```

### Break and Continue — EX_1: Average Using `break`

```text
Enter maximum number of inputs: 4
Enter num1: 2
Enter num2: 4
Enter num3: -1
Average = 3.00
```

The negative number stops further input and is not included in the average.

### Break and Continue — EX_2: Product Using `continue`

```text
Enter num1: 2
Enter num2: 0
Enter num3: 3
Enter num4: 4
product = 24
```

Zero values are skipped; if all four inputs are zero, the program prints `product = 0`.

## 🛠️ Language

- C
