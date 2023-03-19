//WAP that takes name and marks of 10 students. Display them according to marks in descending order.

#include <stdio.h>
#include <string.h>
struct Details{
    char name[50];
    int marks;
}data[10];
int main(){
    int temp;
    char temp_char[50];
    printf("Enter the name and marks of 10 students: \n");
    for (int i=0; i<10; i++){
        printf("Name: ");
        scanf("%s", data[i].name);
        printf("Marks: ");
        scanf("%d", &data[i].marks);
    }
    for(int i=0; i<10; i++){
        for(int j=i+1; j < 10; j++){
            if(data[i].marks < data[j].marks){
                temp = data[i].marks;
                data[i].marks = data[j].marks;
                data[j].marks = temp;
                strcpy(temp_char, data[i].name);
                strcpy(data[i].name, data[j].name);
                strcpy(data[j].name, temp_char);
            }
        }
    }
    printf("\n\nData in descending order is:\n");
    printf("Name\tMarks\n");
    for(int i=0; i< 10; i++){
        printf("%s\t%d\n", data[i].name, data[i].marks);
    }
    return 0;
}