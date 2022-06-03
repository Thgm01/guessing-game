#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define ATTEMPTS 5


int main(void)
{
    system("clear"); //start with a clear terminal

    header();   //print game header

    int sec_num = 42;   //secret number to hit 

    int guess;        //variable that holds the guess
    
    for(int i=1; i<=ATTEMPTS; i++)  // have 3 ATTEMPTS to guess the secret number 
    {

        printf("Attempt %d to %d:\n", i, ATTEMPTS);
        printf("What is your guess?\n");
        scanf("%d", &guess);

        system("clear");
        header();

        if(guess == sec_num)  //if the guess is equal the secret number, you're right
        {     
            printf("Congratulations! You got it right!\n");
            printf("Play again, you're a great player\n");
            break;    //break the for loop 
        }
        else   //esle, you missed
        {
            if(guess < sec_num)   //returns if the guess was less than or greater than the secret number
            {
                printf("You're guess was less than the secret number!\n\n");
            }
            else
            {
                printf("You're guess was greater that the secret number!\n\n");
            }

        }


    }
    printf("End Game!\n");
}


void header()
{
    printf("*****************************************\n");
    printf("***   Welcome to the Guessing Game !  ***\n");
    printf("*****************************************\n\n\n");
}