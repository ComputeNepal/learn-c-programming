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
