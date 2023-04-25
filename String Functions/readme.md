# String Functions

[![ComputeNepal - learn-c-programming](https://img.shields.io/static/v1?label=ComputeNepal&message=learn-c-programming&color=blue&logo=github)](https://github.com/ComputeNepal/learn-c-programming "Go to GitHub repo")
[![stars - learn-c-programming](https://img.shields.io/github/stars/ComputeNepal/learn-c-programming?style=social)](https://github.com/ComputeNepal/learn-c-programming)
[![forks - learn-c-programming](https://img.shields.io/github/forks/ComputeNepal/learn-c-programming?style=social)](https://github.com/ComputeNepal/learn-c-programming)

[![License](https://img.shields.io/badge/License-MIT-blue)](#license)
[![issues - learn-c-programming](https://img.shields.io/github/issues/ComputeNepal/learn-c-programming)](https://github.com/ComputeNepal/learn-c-programming/issues)

[![contributions - welcome](https://img.shields.io/badge/contributions-welcome-blue)](/CONTRIBUTING.md "Go to contributions doc")

![Learn C Programming](https://repository-images.githubusercontent.com/615587446/9a0d7982-bdb2-4918-8570-ebfff27778ad)

## 1. WAP to count the number of vowels and consonants in a given text.

### Program

```c
//WAP to count the number of vowels and consonants in a given text.

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
    char str[51];
    int c = 0, c2 = 0; // c- is incremented when vowels are found, c2 is incremented when consonants are found
    printf("Enter the string: ");
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            c++;
        } else {
            c2++;
        }
    }
    printf("Number of\n vowels: %d \n Consonants: %d\n", c, c2);
    return 0;
}
```

This is a program that counts the number of vowels and consonants in a given
text. The program starts by declaring a character array str with a size of 51,
and two integer variables c and c2 initialized to 0 to count the number of
vowels and consonants, respectively.

The program then prompts the user to enter a string and reads it using the
scanf() function.

Next, the program iterates through each character in the string using a for loop
and checks if the character is a vowel or not. It does this by converting the
character to lowercase using the tolower() function and then comparing it with
the five vowels a, e, i, o, and u. If the character is a vowel, the c variable
is incremented; otherwise, the c2 variable is incremented.

Finally, the program prints the number of vowels and consonants using the
printf() function.

Overall, this program provides a simple example of how to count the number of
vowels and consonants in a given text using basic C language constructs.

## 2. WAP to check if a given string is a palindrome or not.

### Program

```c
//WAP to check if a given string is a palindrome or not.

#include <stdio.h>
#include<string.h>
int main(){
   char str[100], new[100];
    printf("Enter a string: ");
    scanf("%s", str);
    strcpy(new, str);
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    if(strcmp(str, new) == 0)
     printf("Palindrome");
    else
     printf("Not palindrome");

    return 0;

}
```

This program checks if a given string is a palindrome or not. A palindrome is a
string that reads the same backward as forward. Here is how the program works:

- It first takes input from the user in the form of a string using scanf.
- It creates a new string new and copies the input string str into it using the
  strcpy function.
- It finds the length of the string using strlen.
- It then uses a loop to iterate over the first half of the string and swaps
  each character with its corresponding character in the second half of the
  string, effectively reversing the string.
- Finally, it uses the strcmp function to compare the reversed string with the
  original string. If they are the same, it prints "Palindrome", otherwise it
  prints "Not palindrome".

Note that this program assumes that the input string contains only lowercase
letters. If the input string contains uppercase letters, they will not be
recognized as palindromes. Also, the program does not handle cases where the
input string contains spaces or special characters.

## 3. WAP to input the name of 20 students and arrange them in alphabetical order.

### Program

```c
//WAP to input the name of 20 students and arrange them in alphabetical order.

#include <stdio.h>
#include <string.h>
int main(){
    char name[20][50], temp[50];
    printf("Enter the name of 20 students: ");
    for(int i=0; i<20; i++){
        scanf("%s", name[i]);
    }
    for (int i=0; i<20; i++){
        for (int j = i+1; j < 20; j++){
            if(strcmp(name[i], name[j]) > 0){
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    printf("Arranged names: \n");
    for(int i=0; i<20; i++){
        printf("%s\t", name[i]);
    }
    return 0;
}
```

This program inputs the names of 20 students and arranges them in alphabetical
order using the strcmp() function to compare the strings.

It first declares a 2D array of characters name of size 20x50 to store the names
and a character array temp of size 50 to temporarily store a name while
swapping.

Then, it prompts the user to input the names of 20 students using a for loop and
scanf() function to read each name.

After that, it uses two nested for loops to compare each name with the other
names using strcmp() function. If the first name is greater than the second
name, the strcpy() function is used to swap the names.

Finally, it prints the arranged names in alphabetical order using a for loop and
printf() function.

<!-- Add new question above this comment -->

## License

Released under [MIT](/LICENSE) by [@ComputeNepal](https://github.com/ComputeNepal).

[![Website - Visit ComputeNepal](https://img.shields.io/static/v1?label=Website&message=Visit+ComputeNepal&color=2ea44f&logo=RSS)](https://computenepal.com)
