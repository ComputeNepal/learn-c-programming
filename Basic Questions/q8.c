// WAP to check given number is palindrome or not.

#include <stdio.h>
int main(){
    int a, rem, sum = 0, tem;
    printf("Enter a number: ");
    scanf("%d",&a);
    tem = a;
    while(a != 0){
        rem = a % 10;
        sum = sum * 10 + rem;
        a /= 10;
    }
    if(sum == tem)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");
    return 0;
}