//WAP to input name, roll no, marks of n students and store them in file/ read from file also.

#include <stdio.h>

struct studentDetails{
    char name[50];
    int roll;
    int marks;
}data[10];
int main(){
    printf("Enter the name, roll no and marks of 10 students:\n");
    for(int i=0; i<10; i++){
        printf("Name: ");
        scanf("%s",data[i].name);
        printf("Roll: ");
        scanf("%d",&data[i].roll);
        printf("Marks: ");
        scanf("%d",&data[i].marks);
    }
    FILE *fp = fopen("student_details.txt", "a");
    for(int i=0; i<10; i++){
        fprintf(fp, "%s\t%d\t%d\t\n", data[i].name, data[i].roll, data[i].marks);
    }
    printf("Entered Data: \nName\tRoll\tMarks\n");
    fclose(fp);
    fp = fopen("student_details.txt", "r");
    char name[50];
    int roll, marks;
    while( fscanf(fp, "%s%d%d", name, &roll, &marks) != EOF ){
        printf("%s\t%d\t%d\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}
