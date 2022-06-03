#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
    system("clear"); //start with a clear terminal

    header();   //print game header

    int sec_num = 42;   //secret number to hit 

    int guess;        //variable that holds the guess
    int num_of_attempts = 1;
    
    while(1){

        printf("Attempt %d:\n", num_of_attempts);

        printf("What is your guess?\n");
        scanf("%d", &guess);

        system("clear");
        header();

        if(guess < 0)
        {
            printf("You can't guess negative numbers!\n\n");
            continue;
        }

        if(guess == sec_num)  //if the guess is equal the secret number, you're right
        {     
            printf("Congratulations! You got it right!\n");
            printf("Play again, you're a great player\n");
            break; // stops while
        }
        else if(guess < sec_num)   //returns if the guess was less than or greater than the secret number
        {
            printf("You're guess was less than the secret number!\n\n");
        }
        else
        {
            printf("You're guess was greater that the secret number!\n\n");
        }
        num_of_attempts++;
    }
    printf("\nEnd Game!\n");
    printf("You won in %d tries", num_of_attempts);
}

void header()
{
    printf("*****************************************\n");
    printf("***   Welcome to the Guessing Game !  ***\n");
    printf("*****************************************\n\n\n");
}