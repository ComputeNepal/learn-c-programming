//WAP to input 10 numbers and display the largest and smallest number.

#include <stdio.h>

int main(){
    int a[10], largest, smallest;
    printf("Enter 10 numbers: ");
    for(int i=0; i< 10; i++){
        scanf("%d", &a[i]);
    }
    largest = a[0];
    smallest  = a[1];
    for(int i=0; i< 10; i++){
        if(a[i] > largest){
            largest = a[i];
        }
        if(a[i] < smallest){
            smallest = a[i];
        }
    }
    printf("Largest: %d, smallest: %d\n",largest, smallest);
    return 0;
}