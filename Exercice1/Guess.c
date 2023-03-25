#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  int secret_number, guess;

  // Seed the random number generator with the current time
  srand(time(NULL));

  // Generate a random number between 1 and 100
  secret_number = rand() % 100 + 1;

  printf("Guess the number between 1 and 100: ");

  while (1) { // Infinite loop until user guesses the number
    scanf("%d", &guess);
    if (guess == secret_number) 
    {
      printf("Congratulations! You guessed the number.\n");
      break; // Exit the loop if the guess is correct
    }
    else if (guess < secret_number) 
    {
      printf("Too low. Guess again: ");
    }
    else 
    {
      printf("Too high. Guess again: ");
    }
  }

  return 0;
}

