//WAP to read the age of 40 students and count the number of students aged between 15 and 22.

#include <stdio.h>
int main(){
    int a[40], c=0;
    printf("Enter the age of students: ");
    for(int i=0; i<40; i++){
        scanf("%d",&a[i]);
        if(a[i] >= 15 && a[i] <= 22)
            c++;
    }
    printf("Number of students between 15 to 22: %d\n", c);
}
