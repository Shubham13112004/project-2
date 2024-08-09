#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;

    // Print the random number
    // printf("Random number between 1 and 100: %d\n", randomNumber);

    int guess_no;
    int no_of_guess=0;
    do{
        printf("enter a number");
        scanf("%d",&guess_no);

        if(guess_no>randomNumber)
        {
            printf("enter lower");
               printf("\n");

        }
        else if(guess_no<randomNumber){
            printf("higher");
            printf("\n");
        }

            else{
                printf("congrats\n");
            }
          
        
          no_of_guess++;
    }

    while(guess_no!=randomNumber);

    printf("attempts %d",no_of_guess);

    return 0;
}
