//WAP to find the sum of 'n' integer numbers using the function.

#include <stdio.h>
int sum(int);
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Sum: %d\n", sum(a));
    return 0;
}
int sum(int a){
    int n =0;
    for(int i=0; i<=a; i++){
        n+= i;
    }
    return n;
}