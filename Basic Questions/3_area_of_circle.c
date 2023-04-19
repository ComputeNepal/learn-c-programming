//WAP to read the radius of circle and display its area.

#include<stdio.h>
int main(){
    float r, pi=3.14, a;
    printf("Enter radius: ");
    scanf("%f",&r);
    a = pi*r*r;
    printf("Area of the circle: %0.2f\n",a);
    return 0;
}
