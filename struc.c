#include<stdio.h>
#include<string.h>

typedef struct cricketer{

    char name[15];
    int age;
    int no_testmatch;
    float avg_run;

} cricketer;


int main(){
    cricketer info[3];

    for(int i=0; i<3; i++){

        printf("Enter name: ");
           fgets(info[i].name,15, stdin);
           
            printf("Enter age: ");
              scanf(" %d",&info[i].age);

               printf("Enter no of test match: ");
                 scanf("%d", &info[i].no_testmatch);

                   printf("Enter average runs: ");
                      scanf("%f",&info[i].avg_run);
                      getchar();
    } 
    for(int i=0; i<3; i++){

        printf("name: %s", info[i].name);
        printf("Age: %d\n",info[i].age);
        printf("Test match: %d\n",info[i].no_testmatch);
        printf("Average runs: %.2f\n\n", info[i].avg_run);
    }






    return 0;
}