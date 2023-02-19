//Programmed By : Yegetaneh Firew -> github.com/lijnati
//Date : 2/19/2023

#include <stdio.h>

int main()
{
  int secret_number;
  int guess_number;

  secret_number = 7;

  int i;
  int guess_limit;

  guess_limit = 3;

  for(i=1;i<=guess_limit;i++)
  {
    printf("Guess Number %d : " , i);
    scanf("%d", &guess_number);

    if(guess_number == secret_number)
    {
      printf("You win");
      break;
    }
  }

  if(guess_number!=secret_number)
  {
    printf("You lost");
  }

  return 0;
}