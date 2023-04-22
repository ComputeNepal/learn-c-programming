# Array Questions

[![ComputeNepal - learn-c-programming](https://img.shields.io/static/v1?label=ComputeNepal&message=learn-c-programming&color=blue&logo=github)](https://github.com/ComputeNepal/learn-c-programming "Go to GitHub repo")
[![stars - learn-c-programming](https://img.shields.io/github/stars/ComputeNepal/learn-c-programming?style=social)](https://github.com/ComputeNepal/learn-c-programming)
[![forks - learn-c-programming](https://img.shields.io/github/forks/ComputeNepal/learn-c-programming?style=social)](https://github.com/ComputeNepal/learn-c-programming)

[![License](https://img.shields.io/badge/License-MIT-blue)](#license)
[![issues - learn-c-programming](https://img.shields.io/github/issues/ComputeNepal/learn-c-programming)](https://github.com/ComputeNepal/learn-c-programming/issues)

[![contributions - welcome](https://img.shields.io/badge/contributions-welcome-blue)](/CONTRIBUTING.md "Go to contributions doc")

![Learn C Programming](https://repository-images.githubusercontent.com/615587446/9a0d7982-bdb2-4918-8570-ebfff27778ad)

## 1. WAP to input 10 numbers and display the largest and smallest number.

### Program

```c
//WAP to input 10 numbers and display the largest and smallest number.

#include <stdio.h>

int main(){
    int a[10], largest, smallest;
    printf("Enter 10 numbers: ");
    for(int i=0; i< 10; i++){
        scanf("%d", &a[i]);
    }
    largest = a[0];
    smallest  = a[1];
    for(int i=0; i< 10; i++){
        if(a[i] > largest){
            largest = a[i];
        }
        if(a[i] < smallest){
            smallest = a[i];
        }
    }
    printf("Largest: %d, smallest: %d\n",largest, smallest);
    return 0;
}
```

This program reads 10 numbers from the user and finds the largest and smallest
number among them using two for loops.

First, it declares an integer array of size 10 to store the numbers entered by
the user. Then, it prompts the user to enter 10 numbers one by one using a for
loop and scanf function.

After that, it sets the initial values of largest and smallest as the first and
second elements of the array, respectively. It then uses another for loop to
compare all the elements of the array with the current value of largest and
smallest. If any element of the array is larger than the current value of
largest, the largest value is updated to that element. Similarly, if any element
of the array is smaller than the current value of smallest, the smallest value
is updated to that element.

Finally, the program prints the largest and smallest numbers found during the
comparison using printf function.

## 2. WAP to read the age of 40 students and count the number of students aged between 15 and 22.

### Program

```c
//WAP to read the age of 40 students and count the number of students aged between 15 and 22.

#include <stdio.h>
int main(){
    int a[40], c=0;
    printf("Enter the age of students: ");
    for(int i=0; i<40; i++){
        scanf("%d",&a[i]);
        if(a[i] >= 15 && a[i] <= 22)
            c++;
    }
    printf("Number of students between 15 to 22: %d\n", c);
}
```

This program is designed to read the age of 40 students and count the number of
students aged between 15 and 22.

Firstly, an integer array a of size 40 is declared to store the age of the 40
students. Then, the program prompts the user to enter the age of each student
using a for loop that runs 40 times. Inside the loop, the scanf function is used
to read each input age and store it in the corresponding element of the a array.

After reading all the ages, another for loop is used to iterate through the a
array and count the number of students whose age is between 15 and 22
(inclusive). If the age of the current student is within the given range, then
the counter variable c is incremented.

Finally, the program displays the number of students aged between 15 and 22
using the printf function. Note that the printf function does not need a format
specifier for the integer c as it is a simple integer value.

## 3. WAP to input several numbers and arrange them in ascending order.

### Program

```c
//WAP to input several numbers and arrange them in ascending order.

#include <stdio.h>
int main(){
    int a[10], temp;
    printf("Enter the elements of the array: ");
    for(int i=0; i<10; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            if(a[i] > a[j]){
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    printf("Arranged numbers: \n");
    for(int i=0; i<10; i++){
        printf("%d\t", a[i]);
    }
    return 0;
}
```

This program takes input of 10 numbers and then arranges them in ascending order
using the bubble sort algorithm.

The input of the program is taken using the scanf() function and stored in an
integer array called "a" with a size of 10.

Then, two for loops are used for comparing and swapping the elements of the
array in ascending order. The outer loop runs from 0 to 9, and the inner loop
runs from i+1 to 9. This is because each element should be compared with all the
remaining elements, which is done by the inner loop.

If an element is found to be greater than the next element, then they are
swapped. The swapping is done using a temporary variable called temp.

Finally, the arranged numbers are printed using a for loop and printf()
function.

## 4. WAP to input a matrix of size rXc and transpose it.

### Program

```c
//WAP to input a matrix of size rXc and transpose it.
#include <stdio.h>
int main(){
    int a[3][3];
    printf("Enter a matrix: ");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Original matrix: \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }
    printf("Transposed matrix: \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d \t",a[j][i]);
        }
        printf("\n");
    }
}
```

This program takes a 3x3 matrix as input and then transposes it, which means it
converts rows into columns and columns into rows. Here's a step-by-step
explanation of the program:

- The program declares a 3x3 integer array a to store the matrix.
- The program then prompts the user to input the matrix by using two nested
  loops that iterate through each element of the matrix.
- After the matrix is input, the program prints the original matrix by using two
  nested loops to iterate through each element and print it in a tabular format.
- The program then prints the transposed matrix by using two nested loops to
  iterate through each element, but this time, it prints the elements of the
  array in transposed form. This is achieved by swapping the indices of rows and
  columns, so the row index becomes the column index and vice versa.
- Finally, the program exits.

Overall, this program demonstrates how to transpose a matrix in C using two
nested loops to iterate through each element of the matrix.

## 5. WAP to input two matrices of size 2X3 and display their sum.

### Program

```c
//WAP to input two matrices of size 2X3 and display their sum.

#include<stdio.h>
int main(){
    int a[2][3], b[2][3];
    printf("Enter the first matrix:");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the second matrix:");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("Addition matrix: \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("%d\t",a[i][j] + b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
```

This program is designed to add two matrices of size 2x3. Here is an explanation
of how the code works:

- Two 2x3 matrices, a and b, are declared.
- The user is prompted to enter the values for the first matrix, and these
  values are stored in a using a nested for loop.
- The user is prompted to enter the values for the second matrix, and these
  values are stored in b using another nested for loop.
- Another nested for loop is used to calculate the sum of the corresponding
  elements of a and b, and the result is printed as a new 2x3 matrix, which
  represents the addition of the two input matrices.

The program works by adding the corresponding elements of a and b using a nested
for loop to iterate over each element. The result is then printed as a new 2x3
matrix using another nested for loop to print each element in a row-column
format.

Note that in order for two matrices to be added, they must be of the same size
and shape (i.e., have the same number of rows and columns).

## 6. WAP to input custom values for two matrix along with their rows and columns and find the product of those two matrices.

### Program

```c
// matrix multiplication

#include <stdio.h>
#include <stdlib.h>
int mult_matrix(int, int, int, int);

int main(int argc, char *argv[]) {
  int row1, column1, row2, column2;
  printf("================================\n");
  printf("Enter number of rows and columns for the first matrix:\n");
  scanf("%d%d", &row1, &column1);
  printf("================================\n");
  printf("Enter number of rows and columns for  the second matrix:\n");
  scanf("%d%d", &row2, &column2);
  printf("================================\n");
  // check to see if any of the rows and columns are negative
  if (((row1 * column1) < 1) && ((row2 * column2) < 1)) {
    printf("Enter non-negative value.\n");
    exit(EXIT_FAILURE);
  } else {
    if (column1 != row2) {
      // check to see if the number of column of first matrix is equal to the
      // number of rows of second matrix;
      printf("Number of column of first matrix must be equal the row of second "
             "matrix.\n");
      exit(EXIT_FAILURE);

    } else {
      // if all the conditions are true, then call the mult_matrix function
      mult_matrix(row1, column1, row2, column2);
    }
  }

  return 0;
}

int mult_matrix(int row1, int column1, int row2, int column2) {
  int arr1[row1][column1], arr2[row2][column2];
  // take input for first matrix
  for (int i = 0; i < row1; i++) {
    for (int j = 0; j < column1; j++) {
      printf("For first matrix:\n");
      printf("Enter element number [%d][%d]:\n", i + 1, j + 1);
      scanf("%d", &arr1[i][j]);
    }
  }

  printf("================================\n");
  // take input for second matrix
  for (int i = 0; i < row2; i++) {
    for (int j = 0; j < column2; j++) {
      printf("For second matrix:\n");
      printf("Enter element number [%d][%d]:\n", i + 1, j + 1);
      scanf("%d", &arr2[i][j]);
    }
  }
  printf("================================\n");

  // multiplying the two matrixes
  int result[row1][column2];
  for (int i = 0; i < row1; i++) {
    for (int j = 0; j < column2; j++) {
      result[i][j] = 0;
      for (int k = 0; k < column1; k++) {
        // either column1 or row2 can be used
        result[i][j] += arr1[i][k] * arr2[k][j];
      }
    }
  }

  // muliplied matrix
  printf("Result of the product of those two matrixes\n");
  for (int i = 0; i < row1; i++) {
    for (int j = 0; j < column2; j++) {
      printf("%d\t", result[i][j]);
    }
    printf("\n");
  }

  return 0;
}
```

- Takes input for the rows and columns from the user
- Passes into a function with the name mult_matrix
- Takes input for the values of those two matrix from the user
- Multiplies the matrices

---

#### LOGIC

The criteria for the multiplication of two matrices is that,

the number columns of the first matrix must be the same as the number of rows of
second matrix.

example: matrices of order, 2x3 & 3x1

are eligible for multiplication

---

<!-- Add new question above this comment -->

## License

Released under [MIT](/LICENSE) by [@ComputeNepal](https://github.com/ComputeNepal).

[![Website - Visit ComputeNepal](https://img.shields.io/static/v1?label=Website&message=Visit+ComputeNepal&color=2ea44f&logo=RSS)](https://computenepal.com)
