/* rand example: guess the number */
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>

int main ()
{
  int iSecret, iGuess, Score(0), a(1);

  /* initialize random seed: */
  srand (time(NULL));

  /* generate secret number between 1 and 10: */
  iSecret = rand() % 10 + 1;

  do {
    std::cout << Score;
    std::cout << ("\n");
    printf ("Guess the number (1 to 10): ");
    scanf ("%d",&iGuess);
    if (iSecret<iGuess)
    {
      Score + a;
    }
    else if (iSecret>iGuess)
    {
        Score - a;
    }

  } while (iSecret!=iGuess);

  puts ("Congratulations");
  return 0;
}

