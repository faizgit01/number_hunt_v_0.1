#include<stdio.h>
#include<string.h>
int main(){

    char name[15];
    int age;

    FILE*fp;
    fp = fopen("info.txt","w");

    printf("Enter name: ");
       scanf(" %[^\n]",name);
        //  printf("name: %s\n",name);

         printf("Enter age: ");
           scanf("%d",&age);

        fprintf(fp, "Name: %s\n", name);
        fprintf(fp, "Age: %d",age);

        fclose(fp);

        fp = fopen("info.txt","r");
         if(fp == NULL){
            printf("File not found!");
         }
         fscanf(fp, "Name: %[^\n]\nAge: %d", name ,&age);
         printf("Name: %s\n",name);
         printf("Age: %d",age);



         fclose(fp);

    return 0;
}