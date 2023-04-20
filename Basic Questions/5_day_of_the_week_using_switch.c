// WAP to display the name of the day in a week, depending on the number entered through the keyboard using the switch-case statement.

#include <stdio.h>
int main(){
    int ch;
    printf("Enter choice (1-7): ");
    scanf("%d",&ch);
    switch(ch){
        case 1:
            printf("Sunday");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Tuesday");
            break;
        case 4:
            printf("Wednesday");
            break;
        case 5:
            printf("Thursday");
            break;
        case 6:
            printf("Friday");
            break;
        case 7:
            printf("Saturday");
            break;
        default:
            printf("Invalid choice");
            break;
    }
    return 0;
}
