#include<stdio.h>
#include <math.h>
void mul();
void div();
void sum();
void sub();
void greetnamaste();
void greetbonjour();
float userinput();
void greethello();
void greetgoodby();
void areasqr();
void areacircle();
void arearect();




int main(){

    char user; 
    char last ;

    while(1){
    
    printf("choose your operator for area ('c' , 'r' and 's' 'e'= exit , 'p' = repat): ");
    scanf(" %c", &user);

    if(user == 'e'){
        break;
    } 
    if(user == 'p' & last != 0){
        user = last ; // repaet

    }
    else {
        last = user ; //save last operator 
    }

        
    if(user == 'c'|| user == 'C'){
        areacircle();
    }
      else if(user == 'r' || user == 'R'){
         arearect();

      } else if(user == 'S' || user == 's'){
           areasqr();

      } 
    else {
        printf("Invalid input!\n");
    }
    } 
    

   



    return 0;
}

    // // char op ; // operator

    // greethello();

    // char user;

    // printf("If you are Indian press 'I' for French 'f': ");
    // scanf("%c", &user);

    // if(user== 'I' || user == 'i'){
    //     greetnamaste();
    // }

    // else if(user == 'F' || user =='f'){
    //     greetbonjour();
    // }
    //    else{
    //     printf("Invalid input!\n ");
    //    }

    //    greetgoodby();
    
    

    



    // printf("Choose your operator(+,-,/,*) :");
    // scanf("%c", &op);

//     if(op == '*'){
//         mul();
//     } else if(op == '-'){
//         sub();
//     } else if(op == '+'){
//         sum();
//     }else if(op == '/'){
//         div();

//     }else {
//         printf("Invalid input!");
//     }
     
//   return 0;
// }
// void mul(){
//     int a ;
//     printf("Enter your 1st number: ");
//     scanf("%d", &a);

//     int b ;
//      printf("Enter your 2nd number: ");
//      scanf("%d", &b);

//     int result = a*b;
//     printf("answer: %d", result);

// }
// void div(){

//     float a ;
//     printf("Enter your 1st number: ");
//     scanf("%f", &a);

//     float b ;
//      printf("Enter your 2nd number: ");
//      scanf("%f", &b);

//     float result = a/b;
//     printf("answer: %f", result);
// }
// void sum(){

//     int a ;
//     printf("Enter your 1st number: ");
//     scanf("%d", &a);

//     int b ;
//      printf("Enter your 2nd number: ");
//      scanf("%d", &b);

//     int result = a+b;
//     printf("answer: %d", result);
// }
// void sub(){

//     int a ;
//     printf("Enter your 1st number: ");
//     scanf("%d", &a);

//     int b ;
//      printf("Enter your 2nd number: ");
//      scanf("%d", &b);

//     int result = a-b;
//     printf("answer: %d", result);
// }


void greetnamaste(){
    printf("NAMASTE :) \n");

}

void greetbonjour(){
    printf("BONJOUR :) \n");
// }

// float userinput(){
//     float a;
//     float b;

//     printf("Enter your first  number: ");
//     scanf("%f", &a);

//     printf("Enter your second number: ");
//     scanf("%f", &b);

//     return ;
}

void greethello(){
    printf("Hello :)\n ");
}
void greetgoodby(){
    printf("Goodby :) \n");

}
 void areasqr(){
    int a; 
    
    printf("Enter side: ");
    scanf("%d", &a);

    int area = a * a;
    printf("area of square : %d\n", area );

}
void areacircle(){

     float r ; 
    
    printf("Enter radius: ");
    scanf("%f", &r);

    float area = 3.14 * r * r;
    printf("area of circle : %f\n", area );

}
void arearect(){

    float l; // length
    float b; //breadth
    
    printf("Enter length: ");
    scanf("%f", &l);
     
    printf("Enter breadth: ");
    scanf("%f", &b);

    float result = ( l * b);
    printf("area of rectangle : %f\n", result);
}