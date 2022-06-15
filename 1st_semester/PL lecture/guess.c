#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX_NUMBER 100

int secret_number;
void initialize_num_generator(void);
void choose_new_secret_number(void);
void read_guess(void);

int main(void)
{
    char command;
    printf("Guess a number between 1 to %d.\n", MAX_NUMBER);
    initialize_num_generator();
    do
    {
        choose_new_secret_number();
        printf("A new number has been chosen.\n");
        read_guess();
        printf("Play again? (Y/N)");
        scanf(" %c", &command);
        printf("\n");
    } while (command == 'y' || command == 'Y');
    return 0;
}
//////////INITIALIZE RANDOM NUMBER ACCORDING TO THE TIME IN THE DAY ////////////////
void initialize_num_generator(void)
{
    srand((unsigned)time(NULL));
}
/////////Random number between 1 to MAX_NUMBER and store it in secret_number/////////
void choose_new_secret_number(void)
{
    secret_number = rand() % MAX_NUMBER + 1;
    printf("\nYour number %d\n", secret_number);
}
/////////Tell user if it is too low or too high, when correct prints number of guesses and return the value//////
void read_guess(void)
{
    int guess, num_guesses = 0;
    for (;;)
    {
        num_guesses++;
        printf("Enter your guess: ");
        scanf("%d", &guess);
        if (guess == secret_number)
        {
            printf("You won in %d guesses\n", num_guesses);
            return;
        }
        else if (guess < secret_number)
        {
            printf("Your guess is too low, try again\n");
        }
        else
            printf("Your guess is too high, try again\n");
    }
}
