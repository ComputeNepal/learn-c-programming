//WAP to open a new file and read roll-no, name, address and phone number of students until the user says "no", after reading the data, write it to the file then display the content of the file.

#include <stdio.h>
int main(){
    char name[50], address[100], ch;
    int roll;
    long int phone;
    FILE *fp = fopen("data.txt", "a");
    do{
        printf("Enter name: ");
        scanf("%s", name);
        printf("Enter roll: ");
        scanf("%d", &roll);
        printf("Enter address: ");
        scanf("%s", address);
        printf("Enter phone: ");
        scanf("%ld", &phone);
        printf("\nDo you want to continue? [y/N]: ");
        scanf(" %c", &ch);
        fprintf(fp, "%s\t%d\t%s\t%ld\n", name, roll, address, phone);
    }while(ch == 'y' || ch == 'Y');
    fclose(fp);
    fp = fopen("data.txt", "r");
    printf("\n\nName\tRoll\tAddress\tPhone\n");
    while(fscanf(fp, "%s%d%s%ld", name, &roll, address, &phone) != EOF){
        printf("%s\t%d\t%s\t%ld\n", name, roll, address, phone);
    }
    return 0;
}
