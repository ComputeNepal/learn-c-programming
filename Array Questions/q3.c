//WAP to input several numbers and arrange them in ascending order.

#include <stdio.h>
int main(){
    int a[10], temp;
    printf("Enter the elements of the array: ");
    for(int i=0; i<10; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            if(a[i] > a[j]){
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    printf("Arranged numbers: \n");
    for(int i=0; i<10; i++){
        printf("%d\t", a[i]);
    }
    return 0;
}