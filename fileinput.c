#include<stdio.h>
#include<string.h>
int main(){

    char name[20];
    int age;


    FILE* fptr ;
    fptr = fopen("info_1.txt","w");
    printf("Enter name: ");
     scanf("%s",name);

     printf("Enter age: ");
       scanf("%d", &age);

       fprintf(fptr, "Name: %s\n", name);
       fprintf(fptr, "Age: %d",age);

       fclose(fptr);

       fptr = fopen("info_1.txt","r");

       fscanf(fptr, "Name: %s\n", name);
       fscanf(fptr, "Age: %d",&age);
       fclose(fptr);

       printf("Name: %s\n", name);
       printf("Age: %d", age);
    return 0;
}