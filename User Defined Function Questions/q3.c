//WAP to input a number and check if it is even or odd using the function.

#include <stdio.h>
int checker(int);
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if (checker(a) == 1)
        printf("Even");
    else
        printf("Odd");
    return 0;
}
int checker(int a){
    if(a % 2 == 0)
        return 1;
    else
        return 0;
}