# File Handling Questions

[![ComputeNepal - learn-c-programming](https://img.shields.io/static/v1?label=ComputeNepal&message=learn-c-programming&color=blue&logo=github)](https://github.com/ComputeNepal/learn-c-programming "Go to GitHub repo")
[![stars - learn-c-programming](https://img.shields.io/github/stars/ComputeNepal/learn-c-programming?style=social)](https://github.com/ComputeNepal/learn-c-programming)
[![forks - learn-c-programming](https://img.shields.io/github/forks/ComputeNepal/learn-c-programming?style=social)](https://github.com/ComputeNepal/learn-c-programming)

[![License](https://img.shields.io/badge/License-MIT-blue)](#license)
[![issues - learn-c-programming](https://img.shields.io/github/issues/ComputeNepal/learn-c-programming)](https://github.com/ComputeNepal/learn-c-programming/issues)

[![contributions - welcome](https://img.shields.io/badge/contributions-welcome-blue)](/CONTRIBUTING.md "Go to contributions doc")

![Learn C Programming](https://repository-images.githubusercontent.com/615587446/9a0d7982-bdb2-4918-8570-ebfff27778ad)

## 1. WAP to input name, roll no, marks of n students and store them in file/ read from file also.

### Program

```c
//WAP to input name, roll no, marks of n students and store them in file/ read from file also.

#include <stdio.h>

struct studentDetails{
    char name[50];
    int roll;
    int marks;
}data[10];
int main(){
    printf("Enter the name, roll no and marks of 10 students:\n");
    for(int i=0; i<10; i++){
        printf("Name: ");
        scanf("%s",data[i].name);
        printf("Roll: ");
        scanf("%d",&data[i].roll);
        printf("Marks: ");
        scanf("%d",&data[i].marks);
    }
    FILE *fp = fopen("student_details.txt", "a");
    for(int i=0; i<10; i++){
        fprintf(fp, "%s\t%d\t%d\t\n", data[i].name, data[i].roll, data[i].marks);
    }
    printf("Entered Data: \nName\tRoll\tMarks\n");
    fclose(fp);
    fp = fopen("student_details.txt", "r");
    char name[50];
    int roll, marks;
    while( fscanf(fp, "%s%d%d", name, &roll, &marks) != EOF ){
        printf("%s\t%d\t%d\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}
```

This is a C program that allows the user to input the name, roll number, and
marks of 10 students, and then stores the data in a file. The program also reads
the data from the file and displays it on the console.

The program uses a structure studentDetails to define the attributes of each
student - name, roll, and marks. An array of 10 studentDetails structures is
declared using the variable data.

The main function prompts the user to input the data for 10 students using a for
loop. The user is prompted to enter the name, roll number, and marks for each
student, and the data is stored in the data array.

Then the program opens a file named "student_details.txt" in append mode using
the fopen function. It writes the data of 10 students to the file using another
for loop and fprintf function.

After writing the data to the file, the program prints the header for the data
to be displayed. It then closes the file using the fclose function.

The program then opens the file again, this time in read mode, and reads the
data from the file using a while loop and the fscanf function. The data is then
displayed on the console using printf function.

Finally, the program closes the file using the fclose function and returns 0 to
exit.

## 2. WAP to rename and delete a file using rename and remove command.

### Program

```c
//WAP to rename and delete a file using rename and remove command.
#include <stdio.h>
int main(){
    rename("data.txt", "new.txt");
    printf("Renamed data.txt to new.txt\n");
    remove("new.txt");
    printf("Removed data.txt\n");
    return 0;
}
```

This is a C program that demonstrates how to rename and delete a file using the
rename() and remove() functions.

The rename() function is used to change the name of a file from its original
name to a new name. In this program, the function is used to rename the file
"data.txt" to "new.txt". The syntax of the function is int rename(const char
*oldname, const char *newname);, where oldname is the original name of the file,
and newname is the new name of the file. The function returns 0 on success and a
non-zero value on failure.

The remove() function is used to delete a file from the file system. In this
program, the function is used to delete the file "new.txt". The syntax of the
function is int remove(const char \*filename);, where filename is the name of
the file to be deleted. The function returns 0 on success and a non-zero value
on failure.

When the program is executed, it renames the file "data.txt" to "new.txt" and
prints the message "Renamed data.txt to new.txt". Then, it deletes the file
"new.txt" and prints the message "Removed data.txt".

## 3. WAP to open a new file and read roll-no, name, address and phone number of students until the user says "no", after reading the data, write it to the file then display the content of the file.

### Program

```c
//WAP to open a new file and read roll-no, name, address and phone number of students until the user says "no", after reading the data, write it to the file then display the content of the file.

#include <stdio.h>
int main(){
    char name[50], address[100], ch;
    int roll;
    long int phone;
    FILE *fp = fopen("data.txt", "a");
    do{
        printf("Enter name: ");
        scanf("%s", name);
        printf("Enter roll: ");
        scanf("%d", &roll);
        printf("Enter address: ");
        scanf("%s", address);
        printf("Enter phone: ");
        scanf("%ld", &phone);
        printf("\nDo you want to continue? [y/N]: ");
        scanf(" %c", &ch);
        fprintf(fp, "%s\t%d\t%s\t%ld\n", name, roll, address, phone);
    }while(ch == 'y' || ch == 'Y');
    fclose(fp);
    fp = fopen("data.txt", "r");
    printf("\n\nName\tRoll\tAddress\tPhone\n");
    while(fscanf(fp, "%s%d%s%ld", name, &roll, address, &phone) != EOF){
        printf("%s\t%d\t%s\t%ld\n", name, roll, address, phone);
    }
    return 0;
}
```

This program allows the user to input information about students such as their
name, roll number, address, and phone number. The information is read from the
user until the user inputs "no". Then, the information is written to a file
named "data.txt". After the information is written to the file, the content of
the file is displayed.

The program starts by including the standard input/output library (stdio.h). The
main function is defined, and four variables are declared - name, address, roll,
and phone.

Then, a file pointer variable fp is created and is opened in "append" mode with
the file name "data.txt". The user is prompted to enter the details of the
student, and their input is read using scanf. Then, this data is written to the
file using fprintf. The program checks whether the user wants to continue adding
students by asking the user for input and storing the input in the variable
"ch". This continues in a loop until the user inputs "no".

After the loop finishes, the file is closed using fclose. Then, the file is
opened again, this time in "read" mode. The content of the file is read using
fscanf in a loop until the end of the file is reached (indicated by EOF). The
content is then printed to the console using printf.

Finally, the program ends by returning 0.

## 4. WAP to open a new file and store roll-no, name, address and phone number of specified number of students.

### Program

```c
// writing details of students into a file using fwrite and fread for inbuilt to get formatted output
#include <stdio.h>
void students(int);
typedef struct Student {
  char name[10];
  int marks;
  char phone[10];
  int roll_num;
} Student;

int main() {
  int len;
  printf("Enter how many students are to be used:\n");
  scanf("%d", &len);
  students(len);
  return 0;
}
void students(int len) {
  Student std[len];
  FILE *fp = fopen("students.dat", "w");
  for (int i = 0; i < len; i++) {
    printf("For student no [%d]\n", i + 1);
    printf("enter name:");
    scanf("%s", std[i].name);
    printf("enter marks:");
    scanf("%d", &std[i].marks);
    printf("enter phone:");
    scanf("%s", std[i].phone);
    printf("enter roll_num:");
    scanf("%d", &std[i].roll_num);
    printf("-----------------------\n");
    printf("-----------------------\n");
    fwrite(&std[i], sizeof(Student), 1, fp);
  }
  fclose(fp);
  printf("sucessfully wrote data into the file\n");
  printf("-----------------------\n");
  printf("-----------------------\n");

  // to read from a file
  fp = fopen("students.dat", "r");
  for (int i = 0; i < len; i++) {
    fread(&std[i], sizeof(Student), 1, fp);
    printf("Name:%s\n", std[i].name);
    printf("Phone:%s\n", std[i].phone);
    printf("Marks:%d\n", std[i].marks);
    printf("Roll:%d\n", std[i].roll_num);
    printf("---------------------------\n");
  }
}
```

This program asks the user for the number of students whose details should be
entered.

_fwrite, fread_ funtions are used because it will auto format the details when
writing to a file.

A quick runthrough of the program.

- asks for number of students
- asks for details of the students
- writes the details of the student in the file
- opens the file and prints out it's content

<!-- Add new question above this comment -->

## License

Released under [MIT](/LICENSE) by [@ComputeNepal](https://github.com/ComputeNepal).

[![Website - Visit ComputeNepal](https://img.shields.io/static/v1?label=Website&message=Visit+ComputeNepal&color=2ea44f&logo=RSS)](https://computenepal.com)
