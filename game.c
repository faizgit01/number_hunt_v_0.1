#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
void easy_();
void mediu_m();
void hard_();
int main()
{

  printf("welcome to number hunt\n");

  char name[20]; // for name

  printf("Enter your name: ");
  scanf("%[^\n]", name);

  int age;
  printf("Enter your age: ");
  scanf(" %d", &age);

  printf("Welcone %s\n", name);

  printf("You can play now:)\n");

  char choic_e; // for mode of game

  printf("please select mode (easy/medium /hard): ");
  scanf(" %c", &choic_e);

  if(choic_e == 'e')
  {
    easy_();
  }
  else if(choic_e == 'm')
  {
    mediu_m();
  }
  else if(choic_e == 'h')
  {
    hard_();
  }

  

  return 0;
}


  void easy_(){

  srand(time(0));
  int numb;
 
  int run = 1;
  char choice;

  while (1)
  {

    for (int i = 0; i < 3; i++)
    {

     int  random_num = rand() % 10;

      while (1)
      {
        printf("Guess number between (0-9): ");
        if (scanf("%d", &numb) != 1)
        {
          printf("invalid input!\n");
          printf("please enter a valid number..\n");
          while (getchar() != '\n')
            ;
          continue;
        }

        if (numb >= 0 && numb <= 9)
        {
          break;
        }else{
           printf("Number must be between (0 - 9)..\n");
        }
      }
      printf("result: %d\n", random_num);

      if (numb == random_num)
      {
      printf("congratulation you win :)\n");
        break;
      }
      else
        printf("Try Again:(\n");
    }
    getchar();

    printf("Do want to play again (Yes/NO): ");
    scanf(" %c", &choice);

    if (choice == 'y')
    {
      run = 1;
    }
    else if (choice == 'n')
    {
      run = 0;
      printf("Come Again:)");
      break;
    }
  }

  }

void mediu_m(){

srand(time(0));

int numb;
int random_num;

int run = 1;
char choice;

while (1)
{

  for (int i = 0; i <= 5; i++)
  {

    random_num = rand() % 50;

    while (1)
    {
      printf("Guess number between (1-50): ");
      if (scanf("%d", &numb) != 1)
      {
        printf("invalid input!\n");
        printf("please enter a valid number..\n");
        while (getchar() != '\n');
          
        continue;
      }

      if (numb >= 0 && numb <= 50)
      {
        break;
      } else{
        printf("Number must be between (1 - 50)..\n");
      }
    }
    printf("result: %d\n", random_num);

    if (numb == random_num)
    {
      printf("congratulation you win :)\n");
      break;
    }
    else
      printf("Try Again:(\n");
  }
   getchar();

  printf("Do want to play again (yes/no): ");
  scanf(" %c", &choice);

  if (choice == 'y')
  {
    run = 1;
  }
  else if (choice == 'n')
  {
    run = 0;
    printf("Come Again:)");
    break;
  }
}

}
void hard_(){

srand(time(0));

int usr_input;
int random_num; 
char choice; // continue or stop game
int run = 1 ;  // infinty game 
 // run 1
while(1){


  for(int i = 0 ; i <= 10; i++){

    random_num = rand() % 100 ;
while(1){
    printf("guess the number between (1 - 100): ");
    if(scanf("%d", &usr_input) != 1 ){
      printf("invalid input!\n");
      printf("please enter a valid number..\n");
      while(getchar() != '\n');
      continue;
    }
  
  if(usr_input >= 0 && usr_input <= 100){
    break;
  } else{
    printf("Number must be between (1 -100)..\n");
  }
}

 printf("result: %d\n", random_num);
 if(usr_input == random_num){
  printf("congratulation you win :)\n");
   break;
 }
 else{
  printf("try again :(\n");
 }
}
getchar();

printf("Do you want to play again (yes/no): ");
scanf(" %c", &choice);

if(choice == 'y'){
 run = 1;
}else if(choice == 'n'){
  run = 0;

  printf("come again..\n");
  break;
}
  }
}

