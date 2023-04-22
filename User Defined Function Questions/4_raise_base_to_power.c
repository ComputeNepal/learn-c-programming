//WAP using user-defined function to calculate y raise to power x.

#include <stdio.h>
#include <math.h>
long int power(int, int);
int main(){
    int x, y;
    printf("Enter the base and exponent: ");
    scanf("%d%d", &y, &x);
    printf("The value is: %ld", power(y, x));
    return 0;
}
long int power(int y, int x){
    return pow(y, x);
}
