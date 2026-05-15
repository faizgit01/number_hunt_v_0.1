#include<stdio.h>
#include<string.h>
typedef struct employe{

    char name[15];
    int idno;
    char contact;
    int salary;
} emp;

void change(emp* p);






int main(){

   char op;
    emp info[1];

    for(int i=0; i<1;i++){
        printf("enter employe name: ");
          fgets(info[i].name,15,stdin);

          printf("Enter id no: ");
            scanf("%d", &info[i].idno);

            printf("Enter contact no: ");
              scanf("%s",&info[i].contact);

              printf("Enter salary: ");
               scanf("%d", &info[i].salary);
               getchar();
    }  

      printf("Do you want to change info.\n ");
      printf("for change (c) and for submit (s):");
         scanf("%c", &op);

         if(op=='c'){

              change(info);
         } else{
           printf("Thank you:)");
         }






    return 0;
}
void change(emp* p){
    char ch;

    printf("what do you want to change:\n ");
      printf("for 'name(n) , id no(i) , contact no(p) or salary(s):\n");
       scanf(" %c",&ch);

       if(ch =='n'){
          printf("Enter new name:\n ");
          fgets(p->name,15,stdin);
          //  printf("New name: %s",p->name);
        
        }
         
      



}