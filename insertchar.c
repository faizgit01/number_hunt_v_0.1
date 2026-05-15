#include<stdio.h>
#include<string.h>
void userinput();


int main(){

    char userin[15];
      printf("Enter your words: ");
          scanf("%s", userin);

          int count=0; //intialiasing
          for(int i=0; userin[i]!='\0';i++){
            if(userin[i]=='i'||userin[i]=='e'||userin[i]=='a'||userin[i]=='o'||userin[i]=='u'){ //checking vowel
                count++; //adding if present
                        }
          }
          printf("Number of vowels is: %d", count);

// checking given character is present or not
      char str[10];
      
        puts("Enter your string: ");
          fgets(str, 10, stdin);

          for(int i=0; str[i]!='\0';i++){
 
            if(str[i]==str){
                printf("char is present.");
            } else("invalid input.");

          }


    

    
    //         int size = 0;
    // for(int i=0; user[i]!=0; i++){
    //     size++;
    // }
        //  userinput();

       
   

  
     

             
   
    

    // char str[10]= "apple"; //inser extra char in 2index

    // for(int i=4; i>=2; i--){
    //     str[i+1]=str[i];

    // }
    // str[2]= 'b';
    // printf("%s", str);





    return 0;
}
void userinput(){
    
    char user[50];

     printf("Enter your full name: ");
          fgets(user, 50, stdin);
             printf("Entered name is: %s", user);
    
}


    

