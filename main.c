#include <stdio.h>

int main(void)
{

    //print game header
    printf("*****************************************\n");
    printf("***   Welcome to the Guessing Game !  ***\n");
    printf("*****************************************\n\n\n");

    int sec_num = 42;   //secret number to hit 

    int attempt;        //variable that holds the attempt

    printf("What is your attempt?\n");
    scanf("%d", &attempt);

    if(attempt == sec_num)  //if the attempt is equal the secret number, you're right
    {     
        printf("Congratulations! You got it right!\n");
        printf("Play again, you're a great player\n");
    }
    else   //esle, you missed
    {
        printf("You missed!\n");
        printf("But don't be sad, try again!");
    }


}