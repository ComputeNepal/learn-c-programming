//WAP to input a matrix of size rXc and transpose it.
#include <stdio.h>
int main(){
    int a[3][3];
    printf("Enter a matrix: ");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Original matrix: \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }    
    printf("Transposed matrix: \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d \t",a[j][i]);
        }
        printf("\n");
    }
}