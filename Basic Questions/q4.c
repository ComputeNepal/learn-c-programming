//WAP that reads three numbers and displays the largest among them.

#include <stdio.h>
int main(){
    int a,b,c, largest;
    printf("Enter three numbers :");
    scanf("%d%d%d",&a,&b,&c);
    if(a == b || b ==c || c==a){
        printf("Input unequal numbers\n");
        return 0;
    }
    if(a > b && a > c)
        largest = a;
    else if(b >a && b >c)
        largest = b;
    else
        largest = c;
    printf("Large number is: %d\n",largest);
    return 0;
}