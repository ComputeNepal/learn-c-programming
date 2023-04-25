# Structure Questions

[![ComputeNepal - learn-c-programming](https://img.shields.io/static/v1?label=ComputeNepal&message=learn-c-programming&color=blue&logo=github)](https://github.com/ComputeNepal/learn-c-programming "Go to GitHub repo")
[![stars - learn-c-programming](https://img.shields.io/github/stars/ComputeNepal/learn-c-programming?style=social)](https://github.com/ComputeNepal/learn-c-programming)
[![forks - learn-c-programming](https://img.shields.io/github/forks/ComputeNepal/learn-c-programming?style=social)](https://github.com/ComputeNepal/learn-c-programming)

[![License](https://img.shields.io/badge/License-MIT-blue)](#license)
[![issues - learn-c-programming](https://img.shields.io/github/issues/ComputeNepal/learn-c-programming)](https://github.com/ComputeNepal/learn-c-programming/issues)

[![contributions - welcome](https://img.shields.io/badge/contributions-welcome-blue)](/CONTRIBUTING.md "Go to contributions doc")

![Learn C Programming](https://repository-images.githubusercontent.com/615587446/9a0d7982-bdb2-4918-8570-ebfff27778ad)

## 1. WAP that reads roll_no, f_name, l_name, and prints the record on the screen.

### Program

```c
//WAP that reads roll_no, f_name, l_name, and prints the record on the screen.

#include<stdio.h>
struct personalDetails{
    int roll;
    char f_name[20];
    char l_name[20];
} data;
int main(){
    printf("Enter roll no: ");
    scanf("%d", &data.roll);
    printf("Enter first name: ");
    scanf("%s", data.f_name);
    printf("Enter last name: ");
    scanf("%s", data.l_name);
    printf("\n\n**** Personal Details ***\n");
    printf("Roll: %d\nFirst Name: %s\nLast Name: %s\n", data.roll, data.f_name, data.l_name);
    return 0;
}
```

This is a C program that reads the personal details of a student, including
their roll number, first name, and last name, and prints them on the screen.

The program defines a struct called personalDetails that contains three fields:
roll, f_name, and l_name. The struct is then declared as data, which will be
used to store the input values.

In the main() function, the program prompts the user to enter the roll number,
first name, and last name of the student using printf() and scanf() functions.
The user input values are then stored in the corresponding fields of the data
struct using the dot notation.

Finally, the program prints the personal details of the student using printf()
function. It displays the roll number, first name, and last name of the student
on the screen.

## 2. WAP that takes name and marks of 10 students. Display them according to marks in descending order.

### Program

```c
//WAP that takes name and marks of 10 students. Display them according to marks in descending order.

#include <stdio.h>
#include <string.h>
struct Details{
    char name[50];
    int marks;
}data[10];
int main(){
    int temp;
    char temp_char[50];
    printf("Enter the name and marks of 10 students: \n");
    for (int i=0; i<10; i++){
        printf("Name: ");
        scanf("%s", data[i].name);
        printf("Marks: ");
        scanf("%d", &data[i].marks);
    }
    for(int i=0; i<10; i++){
        for(int j=i+1; j < 10; j++){
            if(data[i].marks < data[j].marks){
                temp = data[i].marks;
                data[i].marks = data[j].marks;
                data[j].marks = temp;
                strcpy(temp_char, data[i].name);
                strcpy(data[i].name, data[j].name);
                strcpy(data[j].name, temp_char);
            }
        }
    }
    printf("\n\nData in descending order is:\n");
    printf("Name\tMarks\n");
    for(int i=0; i< 10; i++){
        printf("%s\t%d\n", data[i].name, data[i].marks);
    }
    return 0;
}
```

This program reads the name and marks of 10 students and then sorts them in
descending order based on their marks.

The program starts by defining a struct called Details that contains two
members - a character array name and an integer marks. It then declares an array
of Details called data with a size of 10 to store the name and marks of the
students.

In the main() function, the program prompts the user to enter the name and marks
of 10 students using a for loop. The scanf() function is used to read the name
and marks, and they are stored in the name and marks members of the
corresponding Details struct in the data array.

After the data is entered, the program then uses a nested for loop to sort the
data in descending order based on the marks of the students. It does this by
comparing the marks member of each Details struct in the array and swapping
their positions if necessary. It uses a temporary variable temp to store the
marks and a temporary character array temp_char to store the name while
swapping.

Finally, the sorted data is printed to the console using another for loop that
iterates through the data array and prints the name and marks in descending
order.

Overall, this program demonstrates how to use structures and loops to store and
sort data in a simple and efficient manner.

<!-- Add new question above this comment -->

## License

Released under [MIT](/LICENSE) by [@ComputeNepal](https://github.com/ComputeNepal).

[![Website - Visit ComputeNepal](https://img.shields.io/static/v1?label=Website&message=Visit+ComputeNepal&color=2ea44f&logo=RSS)](https://computenepal.com)
