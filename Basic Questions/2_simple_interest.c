// WAP that reads the principal, rate of interest and number of years and find the simple interest and amount.

#include <stdio.h>
int main(){
    float p, t, r, a, i;
    printf("Enter principal: ");
    scanf("%f",&p);
    printf("Enter rate: ");
    scanf("%f",&r);
    printf("Enter time: ");
    scanf("%f",&t);

    i = (p*t*r)/100;

    a = p+i;

    printf("The simple interest is: %0.2f, and amount is %0.2f.\n",i, a);

    return 0;

}
