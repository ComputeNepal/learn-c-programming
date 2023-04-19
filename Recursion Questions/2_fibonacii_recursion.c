//WAP to calculate a term of Fibonacci series using a recursive function.

#include <stdio.h>

int fibonacci(int n);

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("The %dth term in the Fibonacci sequence is: %d\n", n, fibonacci(n));

    return 0;
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
