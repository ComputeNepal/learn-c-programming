#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number, guess, gNo = 1;
    srand(time(0));
    //generation of random number between 0 and 100
    number = rand() % 100 + 1;
    do{
        printf("Enter the number between 0 and 100: ");
        scanf("%d", &guess);
        if(guess > number){
            printf("Try Smaller number\n");
        }else if (guess < number){
            printf("Try Greater number\n");
        }else{
            printf("Guesses: %d", gNo);
        }
        gNo++;
    }while(guess != number);
    return 0;
}