#include<stdio.h>
#include<string.h>
int main(){


    char firstname[15];
    char lastname[15];
        
           printf("Enter firstname: ");
             scanf("%s", firstname);
               
              printf("Enter lastname: ");
                 scanf("%s", lastname);

                 for(int i=0;firstname[i]!='\0';i++){
                    printf("%c",firstname[i]);
                    }
                    printf(" ");
                    for(int j=0; lastname[j]!='\0';j++){
                        printf("%c",lastname[j]);
                       
                    }
                 

    return 0;
}