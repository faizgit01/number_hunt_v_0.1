#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <time.h>
int main(){

      printf("Guess the Number\n");
   
    int numb;
    int random;
  
    int run = 1;
    char choice ;

    srand(time(0));

    while(1){

    for(int i=0; i<3; i++){

      int ran = rand() %10;

     printf("Guess number between (0-9): ");
            scanf("%d", &numb);

            printf("result: %d\n", ran);

            if(numb == ran){
              printf("You Won :)\n");
              break;
    
            }else 
              printf("Try Again:(\n");
    } getchar();

    printf("Do want to play again (Yes/NO): " );
        scanf(" %c", &choice);

       if(choice =='y'){
        run = 1;
      }else if (choice =='n'){
        run  = 0;
        printf("Come Again:)");
        break;
      }
      
}
   
    return 0;
 
}