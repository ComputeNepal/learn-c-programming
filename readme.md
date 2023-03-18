# Beginners C programming Problems

This repo is a collection of multiple C programming problems and their solutions. Before referring to this repository, it is recommended to know about the basics of programming like what are variables, loops, data types, functions, etc.

Make sure to star the repository if you find it useful.

## Basic Questions

### 1. WAP to find out wether a given number is positive negative or zero.

This is a simple program that prompts the user to enter an integer, reads the integer from the console using scanf(), and then determines whether the number is positive, negative, or zero. Here's how the program works:

- The program declares an integer variable a.

- The program prompts the user to enter a number and reads the number from the console using scanf().

- The program checks if a is equal to 0. If it is, the program prints "Zero" using printf().

- If a is not equal to 0, the program checks if a is greater than 0. If it is, the program prints "Positive" using printf().

- If a is not equal to 0 and is not greater than 0, the program assumes that a is negative and prints "Negative" using printf().

- The program returns 0 to indicate successful completion.

For example, if the user enters 10, the program will output "Positive". If the user enters -5, the program will output "Negative". And if the user enters 0, the program will output "Zero".

### 2. WAP that reads the principal, rate of interest and number of years and find the simple interest and amount.

This is a simple program that calculates the simple interest and amount based on the given principal, rate of interest, and number of years. Here's how the program works:

- The program declares five float variables: p for principal, t for time, r for rate of interest, a for amount, and i for simple interest.

- The program prompts the user to enter the principal, rate of interest, and number of years using three separate printf() statements and reads the values from the console using three separate scanf() statements.

- The program calculates the simple interest i using the formula (p*t*r)/100. This formula calculates the simple interest by multiplying the principal p, time t, and rate of interest r and dividing the result by 100.

- The program calculates the amount a by adding the principal p and the simple interest i.

- The program uses printf() to display the simple interest and amount. The "%0.2f" format specifier is used to print the float values with two decimal places.

- The program returns 0 to indicate successful completion.

For example, if the user enters principal=1000, rate=5, and time=2, the program will output "The simple interest is: 100.00, and amount is 1100.00." This means that the simple interest is 100.00 and the total amount after 2 years is 1100.00.

### 3. WAP to read the radius of circle and display its area.

This is a C program to calculate the area of a circle. It takes the radius of the circle as input from the user using the scanf() function, and calculates the area using the formula pi*r*r where pi is the mathematical constant representing the ratio of the circumference of a circle to its diameter (approximately equal to 3.14).

The calculated area is stored in the variable a, and then printed on the screen using the printf() function with the appropriate format specifier %0.2f to display the output up to 2 decimal places.

Finally, the program returns 0 indicating successful execution of the program.

### 4. WAP that reads three numbers and displays the largest among them.

This is a C program that reads three integers from the user and then finds the largest among them using conditional statements.

The program first prompts the user to enter three numbers using the printf() function and then reads the input values into variables a, b, and c using the scanf() function.

Next, it checks if any two of the entered numbers are equal or not using an if-statement with multiple conditions. If any two numbers are equal, the program prints "Input unequal numbers" and exits the program by returning 0.

If all three input values are different, then the program finds the largest of the three numbers using nested if-else statements. It compares a with b and c to find the largest value and stores it in the variable largest.

Finally, it prints the value of largest using the printf() function with the appropriate format specifier %d, indicating the largest number among the input values.

### 5. WAP to display the name of the day in a week, depending on the number entered through the keyboard using the switch-case statement.

This program prompts the user to enter a number between 1 and 7, representing a day of the week, and uses a switch-case statement to display the corresponding day name.

The program starts by declaring an integer variable ch to store the user input. It then prompts the user to enter a choice between 1 and 7, and reads the input using the scanf() function.

Next, the program uses a switch-case statement to determine the day of the week corresponding to the user input. Each case represents a number between 1 and 7, and displays the corresponding day name using the printf() function. If the user enters a number outside the range of 1 to 7, the default case is executed, which displays an error message.

Finally, the program returns 0 to indicate successful execution of the program.

### 6. WAP to display all the natural numbers up to 100.

This program displays all the natural numbers from 1 to 100 using a for loop.

The program starts by initializing a variable i to 1. Then it enters into the for loop where it checks the condition i<=100. As long as this condition is true, the loop body will be executed, and the value of i will be printed on the console using printf() function followed by a tab character \t. The loop continues until the condition becomes false, which happens when i becomes greater than 100. At this point, the program exits the loop and returns 0.

### 7. WAP to display the sum of 'n' terms of 'even' numbers.

This is a program that takes an input number 'n' from the user and displays the sum of 'n' terms of even numbers. The program uses a for loop to iterate through all the integers from 1 to 'n'. In each iteration, it checks whether the integer is even or not by using the modulo operator (%). If the integer is even, it adds it to the variable 'sum'. After all the iterations, the final value of 'sum' is printed to the console.

For example, if the user enters 5, the program will iterate through the integers 1 to 5, and add the even numbers (2 and 4) to the variable 'sum'. Finally, it will print the value of 'sum', which in this case would be 6 (2+4=6).

### 8. WAP to check given number is palindrome or not.

This program checks if the given number is a palindrome or not. A palindrome number is a number that remains the same when its digits are reversed.

The program takes an integer input a from the user, which is the number that needs to be checked. A temporary variable tem is initialized with the value of a. Then the program enters into a while loop where it extracts the last digit of the number and adds it to a variable sum which is multiplied by 10 and then adds the last digit to it. The last digit is removed from a after each iteration until a becomes 0.

After the loop, the value of sum is compared with the original number tem. If they are the same, the program prints "Palindrome" which indicates that the given number is a palindrome. Otherwise, it prints "Not palindrome".

For example, if the user inputs 121, the program extracts each digit (1, 2, 1) in reverse order and adds them to sum variable. After the loop, sum becomes 121 which is the same as the original number. Therefore, the program prints "Palindrome".

### 9. WAP to find the factorial of any given number.

This C program finds the factorial of a given number using a for loop.

The program first declares three variables: n, p, and i.

- n is an integer that will be used to store the user input, which is the number for which we need to find the factorial.
- p is another integer variable that is initialized to 1. We will use p to calculate the factorial of n.
- i is a loop counter variable that starts at 1 and iterates up to n.
  The user is prompted to enter a number, which is read using the scanf() function and stored in the variable n.

The program then checks if the value of n is 0 or negative. If n is 0, the factorial is 1, and the program prints the output. If n is negative, there is no factorial, and the program prints an error message.

If n is a positive integer, the program uses a for loop to calculate the factorial. The loop starts at 1 and iterates up to n. In each iteration, the value of i is multiplied to p. The final value of p is the factorial of n.

Finally, the program prints the output, which is the value of p.

## Array Questions

### 1. WAP to input 10 numbers and display the largest and smallest number.

This program reads 10 numbers from the user and finds the largest and smallest number among them using two for loops.

First, it declares an integer array of size 10 to store the numbers entered by the user. Then, it prompts the user to enter 10 numbers one by one using a for loop and scanf function.

After that, it sets the initial values of largest and smallest as the first and second elements of the array, respectively. It then uses another for loop to compare all the elements of the array with the current value of largest and smallest. If any element of the array is larger than the current value of largest, the largest value is updated to that element. Similarly, if any element of the array is smaller than the current value of smallest, the smallest value is updated to that element.

Finally, the program prints the largest and smallest numbers found during the comparison using printf function.

### 2. WAP to read the age of 40 students and count the number of students aged between 15 and 22.

This program is designed to read the age of 40 students and count the number of students aged between 15 and 22.

Firstly, an integer array a of size 40 is declared to store the age of the 40 students. Then, the program prompts the user to enter the age of each student using a for loop that runs 40 times. Inside the loop, the scanf function is used to read each input age and store it in the corresponding element of the a array.

After reading all the ages, another for loop is used to iterate through the a array and count the number of students whose age is between 15 and 22 (inclusive). If the age of the current student is within the given range, then the counter variable c is incremented.

Finally, the program displays the number of students aged between 15 and 22 using the printf function. Note that the printf function does not need a format specifier for the integer c as it is a simple integer value.

### 3. WAP to input several numbers and arrange them in ascending order.

This program takes input of 10 numbers and then arranges them in ascending order using the bubble sort algorithm.

The input of the program is taken using the scanf() function and stored in an integer array called "a" with a size of 10.

Then, two for loops are used for comparing and swapping the elements of the array in ascending order. The outer loop runs from 0 to 9, and the inner loop runs from i+1 to 9. This is because each element should be compared with all the remaining elements, which is done by the inner loop.

If an element is found to be greater than the next element, then they are swapped. The swapping is done using a temporary variable called temp.

Finally, the arranged numbers are printed using a for loop and printf() function.

### 4. WAP to input a matrix of size rXc and transpose it.

This program takes a 3x3 matrix as input and then transposes it, which means it converts rows into columns and columns into rows. Here's a step-by-step explanation of the program:

- The program declares a 3x3 integer array a to store the matrix.
- The program then prompts the user to input the matrix by using two nested loops that iterate through each element of the matrix.
- After the matrix is input, the program prints the original matrix by using two nested loops to iterate through each element and print it in a tabular format.
- The program then prints the transposed matrix by using two nested loops to iterate through each element, but this time, it prints the elements of the array in transposed form. This is achieved by swapping the indices of rows and columns, so the row index becomes the column index and vice versa.
- Finally, the program exits.

Overall, this program demonstrates how to transpose a matrix in C using two nested loops to iterate through each element of the matrix.

### 5. WAP to input two matrices of size 2X3 and display their sum.

This program is designed to add two matrices of size 2x3. Here is an explanation of how the code works:

- Two 2x3 matrices, a and b, are declared.
- The user is prompted to enter the values for the first matrix, and these values are stored in a using a nested for loop.
- The user is prompted to enter the values for the second matrix, and these values are stored in b using another nested for loop.
- Another nested for loop is used to calculate the sum of the corresponding elements of a and b, and the result is printed as a new 2x3 matrix, which represents the addition of the two input matrices.

The program works by adding the corresponding elements of a and b using a nested for loop to iterate over each element. The result is then printed as a new 2x3 matrix using another nested for loop to print each element in a row-column format.

Note that in order for two matrices to be added, they must be of the same size and shape (i.e., have the same number of rows and columns).

## String Functions

### 1. WAP to count the number of vowels and consonants in a given text.

This is a program that counts the number of vowels and consonants in a given text. The program starts by declaring a character array str with a size of 51, and two integer variables c and c2 initialized to 0 to count the number of vowels and consonants, respectively.

The program then prompts the user to enter a string and reads it using the scanf() function.

Next, the program iterates through each character in the string using a for loop and checks if the character is a vowel or not. It does this by converting the character to lowercase using the tolower() function and then comparing it with the five vowels a, e, i, o, and u. If the character is a vowel, the c variable is incremented; otherwise, the c2 variable is incremented.

Finally, the program prints the number of vowels and consonants using the printf() function.

Overall, this program provides a simple example of how to count the number of vowels and consonants in a given text using basic C language constructs.

### 2. WAP to check if a given string is a palindrome or not.

This program checks if a given string is a palindrome or not. A palindrome is a string that reads the same backward as forward. Here is how the program works:

- It first takes input from the user in the form of a string using scanf.
- It creates a new string new and copies the input string str into it using the strcpy function.
- It finds the length of the string using strlen.
- It then uses a loop to iterate over the first half of the string and swaps each character with its corresponding character in the second half of the string, effectively reversing the string.
- Finally, it uses the strcmp function to compare the reversed string with the original string. If they are the same, it prints "Palindrome", otherwise it prints "Not palindrome".

Note that this program assumes that the input string contains only lowercase letters. If the input string contains uppercase letters, they will not be recognized as palindromes. Also, the program does not handle cases where the input string contains spaces or special characters.

### 3. WAP to input the name of 20 students and arrange them in alphabetical order.

This program inputs the names of 20 students and arranges them in alphabetical order using the strcmp() function to compare the strings.

It first declares a 2D array of characters name of size 20x50 to store the names and a character array temp of size 50 to temporarily store a name while swapping.

Then, it prompts the user to input the names of 20 students using a for loop and scanf() function to read each name.

After that, it uses two nested for loops to compare each name with the other names using strcmp() function. If the first name is greater than the second name, the strcpy() function is used to swap the names.

Finally, it prints the arranged names in alphabetical order using a for loop and printf() function.
