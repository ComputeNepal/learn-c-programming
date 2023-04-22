// WAP to find wether the given number is positive, negative or zero.

#include <stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a == 0)
        printf("Zero\n");
    else if (a > 0)
        printf("Positive\n");
    else
        printf("Negative\n");
    return 0;
}
