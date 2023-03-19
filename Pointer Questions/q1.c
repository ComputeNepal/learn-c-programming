//WAP to check even or odd numbers using pointer.

#include <stdio.h>
int check(int*);
int main(){
    int a;
    int *pt = &a;
    printf("Enter a number: ");
    scanf("%d", &a);
    check(pt);
    return 0;
}
int check(int *pt){
    if(*pt % 2 == 0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
    return 0;
}