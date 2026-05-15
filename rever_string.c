#include<stdio.h>
#include<string.h>
void reverse();
int main(){


    // char name[40];
    //    printf("enter your name: ");
    //       fgets(name,40,stdin);
    //         //  scanf("%[^\n]s",name);
    //            printf("your name is: %s", name);
    //             //   puts(name);

    //             //reverse of string
    // //    printf("after reversig: ");
    //    int size = 0;
    //    for(int i=0; name[i]!='\0'; i++){
    //      size++;
    //    }
       
        // for(int i=0, j=size-1;i<=j; i++ , j--){
        //     char temp; 
        //     temp = name[i];
        //     name[i]=name[j];
        //     name[j]=temp;
        // } 
        //     // printf("size is : %d", length);
         
        //     printf("Reverse string is: %s",name);
            

        reverse();



    //    }
    return 0;

}  
void reverse(){

     char name[40];
       printf("enter your name: ");
          fgets(name,40,stdin);
            //  scanf("%[^\n]s",name);
               printf("your name is: %s", name);
    int size=0;
    for(int i=0; name[i]!='\0'; i++){
        size++;
    }
for(int i=0, j=size-1; i<=j; i++, j--){

    char temp;
    temp= name[i];
    name[i]=name[j];
    name[j]=temp;
}  printf("reverse is: %s", name);


}   


