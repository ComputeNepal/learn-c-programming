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
