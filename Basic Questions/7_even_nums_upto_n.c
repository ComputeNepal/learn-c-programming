// WAP to display the sum of 'n' terms of 'even' numbers.

#include <stdio.h>
int main(){
    int n, sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1; i <= n; i++){
        if(i % 2 == 0){
            sum += i;
        }
    }
    printf("Sum is %d\n",sum);
    return 0;
}
