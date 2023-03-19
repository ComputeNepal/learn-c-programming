//WAP that reads roll_no, f_name, l_name, and prints the record on the screen.

#include<stdio.h>
struct personalDetails{
    int roll;
    char f_name[20];
    char l_name[20];
} data;
int main(){
    printf("Enter roll no: ");
    scanf("%d", &data.roll);
    printf("Enter first name: ");
    scanf("%s", data.f_name);
    printf("Enter last name: ");
    scanf("%s", data.l_name);
    printf("\n\n**** Personal Details ***\n");
    printf("Roll: %d\nFirst Name: %s\nLast Name: %s\n", data.roll, data.f_name, data.l_name);
    return 0;
}