#include<stdio.h>
#include<string.h>

typedef struct Banking{
    char name[20];
    int account_no;
    float balance;
    int pin;

}Banking;

void createacc(Banking info[], int *count);
void displayacc(Banking info[], int count);

int main(){

    Banking info[100];
    int count = 0;
    int user_input;

    printf("Welcome to internet banking:)\n");
    printf("'what do you want to do'\n\n");
    printf("create account (1)\nsearch account(2)\nDeposit(3)\nwithdraw(4)\nupdate(5): ");
    scanf("%d",&user_input);

     if(user_input == 1){
        createacc(info,&count);
     }
     else if(user_input ==2){

     }






    return 0;
}

void createacc(Banking info[], int *count){
 
    
        FILE* fptr;
        fptr = fopen("Banking.txt","w");
int choice = 1;
    while(choice ==1){

        
        if(fptr==NULL){
            printf("File NOt exists!");
        }

        printf("Enter name: ");
        scanf("%s",info[*count].name);
        getchar();
    
        // printf("%s",info[*count].name);
        printf("Enter account number: ");
        scanf("%d",&info[*count].account_no);
        
        printf("Enter Balance: ");
        scanf("%f",&info[*count].balance);

        printf("Enter pin: ");
        scanf("%d",&info[*count].pin);
       

        printf("Do you want to add more(1) or save(0)): ");
        scanf("%d",&choice);

        
        fprintf(fptr,"Account holder name: %s\n",info[*count].name);
        fprintf(fptr,"Account Number: %d\n",info[*count].account_no);
        fprintf(fptr,"Balance: %.2f\n",info[*count].balance);
        fprintf(fptr,"Pin: %d",info[*count].pin);
         (*count)++;

       printf("Account successfulyy created:)");
    } fclose(fptr);

    
}

    void displayacc(Banking info[], int count){ 

        
   }
    

   

    


