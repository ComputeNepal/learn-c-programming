//WAP to input the name of 20 students and arrange them in alphabetical order.

#include <stdio.h>
#include <string.h>
int main(){
    char name[20][50], temp[50];
    printf("Enter the name of 20 students: ");
    for(int i=0; i<20; i++){
        scanf("%s", name[i]);
    }
    for (int i=0; i<20; i++){
        for (int j = i+1; j < 20; j++){
            if(strcmp(name[i], name[j]) > 0){
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    printf("Arranged names: \n");
    for(int i=0; i<20; i++){
        printf("%s\t", name[i]);
    }
    return 0;
}