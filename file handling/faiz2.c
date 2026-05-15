#include<stdio.h>
#include<string.h>
typedef struct info{
    char name[20];
    int age;
    int salary;
    char city[15]; 
}info;
int main(){

   
    FILE* fp;
    info user[1];
    
    // fp =fopen("user.txt","w");
    //  if(fp == NULL){
    //   printf("File doesn't exisit!");
    //    return 1;
    //  }
    //  for(int i = 0; i<1 ; i++){
         
      
    //    printf("Enter full name: ");
    //     scanf(" %[^\n]",user[i].name);
    //     getchar();
    //   //    fgets(user[i].name,20,stdin);
    //     //  user[i].name[strcspn(user[i].name , "\n")] = '\0';
        
    //       printf("Enter age: ");
    //       scanf("%d",&user[i].age);
    
    //        printf("Enter salary: ");
    //         scanf("%d",&user[i].salary);
    //         getchar();

    //       printf("Enter city: ");
    //        scanf("%[^\n]",user[i].city);
    //        getchar();

    //        fprintf(fp , "Name: %-15s Age: %-5d City: %-10s  salary: %-5d",
    //         user[i].name,
    //         user[i].age,
    //         user[i].city,
    //         user[i].salary);
    //       //  fprintf(fp , "City: %s\n", user[i].city);
    //       // fprintf(fp , "age: %d\n",user[i].age);
                      
    //          getchar();
    //          fflush(fp);
    //  } fclose(fp);
     fp = fopen("user.txt" , "r");
      for(int i=0 ; i<1 ; i++){
           
        fscanf(fp , "%s %d %s %d",
       user[i].name,
       user[i].age,
       user[i].city,
       user[i].salary);
      } fclose(fp);
         
       printf("\nStored Data: \n\n");
        
      
        fclose(fp);
    return 0;
}