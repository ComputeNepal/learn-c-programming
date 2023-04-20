//WAP to check if a given string is a palindrome or not.

#include <stdio.h>
#include<string.h>
int main(){
   char str[100], new[100];
    printf("Enter a string: ");
    scanf("%s", str);
    strcpy(new, str);
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    if(strcmp(str, new) == 0)
     printf("Palindrome");
    else
     printf("Not palindrome");

    return 0;

}
