//WAP to input a number and calculate its reverse using function.

#include <stdio.h>

int reverse(int);
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Reversed number: %d\n", reverse(a));
    return 0;
}
int reverse(int a){
    int rem, temp, rev=0;
    while(a != 0){
        rem = a%10;
        rev = rev * 10 + rem;
        a /= 10;
    }
    return rev;
}
