#include <stdio.h>
#include<string.h>
typedef struct employe{
    char name[15];
    int idno;
    int salary;

} emp;

    

int main(){ 
    emp e1;
    emp* p= &e1;

    strcpy(p->name,"faiz");
    p->idno=01;
    p->idno = 10;
    p->salary = 1500;

    printf("name: %s\n", p->name);

    printf("id no: %d\n",p->idno);
    printf("salary: %d\n",p->salary);




    return 0;
}