# Pointer Questions

[![ComputeNepal - learn-c-programming](https://img.shields.io/static/v1?label=ComputeNepal&message=learn-c-programming&color=blue&logo=github)](https://github.com/ComputeNepal/learn-c-programming "Go to GitHub repo")
[![stars - learn-c-programming](https://img.shields.io/github/stars/ComputeNepal/learn-c-programming?style=social)](https://github.com/ComputeNepal/learn-c-programming)
[![forks - learn-c-programming](https://img.shields.io/github/forks/ComputeNepal/learn-c-programming?style=social)](https://github.com/ComputeNepal/learn-c-programming)

[![License](https://img.shields.io/badge/License-MIT-blue)](#license)
[![issues - learn-c-programming](https://img.shields.io/github/issues/ComputeNepal/learn-c-programming)](https://github.com/ComputeNepal/learn-c-programming/issues)

[![contributions - welcome](https://img.shields.io/badge/contributions-welcome-blue)](/CONTRIBUTING.md "Go to contributions doc")

![Learn C Programming](https://repository-images.githubusercontent.com/615587446/9a0d7982-bdb2-4918-8570-ebfff27778ad)

## 1. WAP to check even or odd numbers using pointer.

### Program

```c
//WAP to check even or odd numbers using pointer.

#include <stdio.h>
int check(int*);
int main(){
    int a;
    int *pt = &a;
    printf("Enter a number: ");
    scanf("%d", &a);
    check(pt);
    return 0;
}
int check(int *pt){
    if(*pt % 2 == 0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
    return 0;
}
```

This is a C program that checks if a given number is even or odd using pointers.
Here's how it works:

- The program starts by declaring an integer variable a, and a pointer variable
  pt which will point to the address of a.

- The user is prompted to enter a number, which is then read and stored in a
  using the scanf() function.

- The check() function is called, passing in the address of a as an argument.

- Inside the check() function, the value of a is accessed using the
  dereferencing operator \*, and checked if it is even or odd using the modulo
  operator %.

- If the number is even, the function prints "Even" to the console. If the
  number is odd, the function prints "Odd" to the console.

- Finally, the check() function returns 0, and control is returned to the main()
  function.

- The program terminates by returning 0 from the main() function.

So essentially, the program is using a pointer to pass the address of the
integer variable to the check() function, so that it can access and manipulate
the value of the variable directly. This allows the function to check whether
the number is even or odd without needing to return a value.

## 2. WAP to swap two numbers using pointer.

### Program

```c
//WAP to swap two numbers using pointer.

#include <stdio.h>
int swap(int *, int *);
int main(){
    int a, b;
    int *ptr1 = &a, *ptr2 = &b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("Before Swap:\na = %d\tb = %d\n", a, b);
    swap(ptr1, ptr2);
    printf("After Swap:\na = %d\tb = %d\n", a, b);
    return 0;
}
int swap(int *ptr1, int *ptr2){
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    return 0;
}
```

This program swaps the values of two numbers entered by the user using pointers.

Here's how it works:

- The program declares two integer variables a and b and two integer pointer
  variables ptr1 and ptr2.
- The user is prompted to enter two integers which are stored in a and b using
  scanf.
- The program prints the original values of a and b.
- The function swap is called, passing in ptr1 and ptr2 as arguments.
- In the swap function, a temporary integer variable temp is declared and
  assigned the value of the integer pointed to by ptr1.
- The integer pointed to by ptr1 is assigned the value of the integer pointed to
  by ptr2.
- The integer pointed to by ptr2 is assigned the value of the integer stored in
  temp.
- The swap function returns.
- The program prints the new values of a and b.

The swap function works by using pointer arithmetic to access the values of the
integers pointed to by ptr1 and ptr2. The values are swapped using a temporary
variable to avoid losing any data during the swap. The original variables a and
b are modified indirectly by the function through their pointers.

<!-- Add new question above this comment -->

## License

Released under [MIT](/LICENSE) by [@ComputeNepal](https://github.com/ComputeNepal).

[![Website - Visit ComputeNepal](https://img.shields.io/static/v1?label=Website&message=Visit+ComputeNepal&color=2ea44f&logo=RSS)](https://computenepal.com)
