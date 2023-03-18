//WAP to find the factorial of any given number.

#include <stdio.h>
int main(){

    int n, p = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n == 0)
        printf("Factorial is 1");
    else if (n < 0)
        printf("There is no factorial for negative numbers");
    
    for (int i=1; i<=n; i++){
        p *=i;
    }
    printf("Factorial is %d", p);
    return 0;
}