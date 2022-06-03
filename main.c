#include <stdio.h>

int main(void)
{

    //print game header
    printf("*****************************************\n");
    printf("***   Welcome to the Guessing Game !  ***\n");
    printf("*****************************************\n\n\n");

    int sec_num = 42;   //secret number to hit 

    int guess;        //variable that holds the guess
    
    for(int i=0; i < 3; i++)  // have 3 attempts to guess the secret number 
    {
        printf("What is your guess?\n");
        scanf("%d", &guess);

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
                printf("You're guess was less than the secret number!\n");
            }
            else
            {
                printf("You're guess was greater that the secret number!\n");
            }

        }
    }
    printf("End Game!\n");
}