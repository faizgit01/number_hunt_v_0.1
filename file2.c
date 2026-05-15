#include<stdio.h>
#include<string.h>
typedef struct employe{
    char name[20];
    int age;
    int id_no;
    char city[20];
    int salary;

}emp;

int main(){

    emp data[2];
    FILE*fptr;

    fptr = fopen("emp.txt","w");
    if(fptr == NULL){
        printf("File Not Found!");
         return 1;
    }
     for(int i = 0; i<2; i++){

        printf("Enter your name: ");
         scanf("%s",data[i].name);

         getchar();
         printf("Enter age: ");
          scanf("%d", &data[i].age);

          printf("Enter Id_NO: ");
           scanf("%d",&data[i].id_no);
           getchar();

           printf("Enter city: ");
            scanf("%s",data[i].city);
            getchar();

            printf("Enter salary: ");
            scanf("%d",&data[i].salary);    
            
            fprintf(fptr, "Name:%s\nAge:%d\nID_no:%d\nCity:%s\nSalary:%d\n",
             data[i].name,
             data[i].age,
             data[i].id_no,
             data[i].city,
             data[i].salary);
             getchar();
     }
      fclose(fptr);
    
        

     fptr = fopen("emp.txt","r");
      int i=0;
     while(fscanf(fptr,
        "Name:%s\nAge:%d\nID_no:%d\nCity:%s\nSalary:%d\n",
       data[i].name,
       &data[i].age,
       &data[i].id_no,
       data[i].city,
       &data[i].salary) ==5){
         i++;
       }
         fclose(fptr);

     
      for(int j=0; j<i; j++){
        printf("Name: %s\n", data[j].name);
        printf("Age: %d\n", data[j].age);
        printf("Id_no: %d\n", data[j].id_no);
        printf("City: %s\n", data[j].city);
        printf("Salary: %d\n\n", data[j].salary);
      }
       

       






    return 0;
}