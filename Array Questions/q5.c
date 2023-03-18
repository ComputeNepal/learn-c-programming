//WAP to input two matrices of size 2X3 and display their sum.

#include<stdio.h>
int main(){
    int a[2][3], b[2][3];
    printf("Enter the first matrix:");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the second matrix:");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("Addition matrix: \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("%d\t",a[i][j] + b[i][j]);
        }
        printf("\n");
    }
    return 0;
}