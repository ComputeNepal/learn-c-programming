//WAP to count the number of vowels and consonants in a given text.

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
    char str[51];
    int c = 0, c2 = 0;
    printf("Enter the string: ");
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            c++;
        } else {
            c2++;
        }
    }
    printf("Vowels: %d, consonants: %d\n", c, c2);
    return 0;
}