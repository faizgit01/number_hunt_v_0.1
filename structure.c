#include<stdio.h>
#include<string.h>
struct studentinfo{
    char name[30];
    int roll;
    float cgpa;
    char number[15];
};

int main(){

    struct studentinfo s1;
    printf("Enter your name: ");
      getchar(); // clean buffer
      fgets(s1.name , 30, stdin);
         printf("Entered name is : %s",s1.name);

        printf("Enter roll no: ");
           scanf("%d",&s1.roll);
              printf("Entered roll no is : %d\n",s1.roll);
        
              printf("Enter cgpa: ");
                scanf("%f", &s1.cgpa);
                  printf("Entered cgpa is : %.2f\n",s1.cgpa);

                  printf("Enter contact number: ");
                     scanf("%s",s1.number);
                       printf("Entered contact number: %s\n",s1.number);

     struct studentinfo s2; 
         printf("Enter name: ");
           getchar(); // buffer clear
            fgets(s2.name,30,stdin);
                 printf("your name is: %s",s2.name);

                     printf("Enter roll no : ");
                      scanf("%d",&s2.roll);
                         printf("Enter roll number is : %d\n", s2.roll);
                  
                   printf("Enter cgpa: ");
                     scanf("%f", &s2.cgpa);
                       printf("entered cgpa is: %.2f\n",s2.cgpa);

                         printf("Enter contact number: ");
                            scanf("%s",s2.number);
                               printf("enterrd number is: %s\n", s2.number);
        
      



    return 0;
}