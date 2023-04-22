//WAP to rename and delete a file using rename and remove command.
#include <stdio.h>
int main(){
    rename("data.txt", "new.txt");
    printf("Renamed data.txt to new.txt\n");
    remove("new.txt");
    printf("Removed data.txt\n");
    return 0;
}
