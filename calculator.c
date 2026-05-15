#include<stdio.h>
void add(float a, float b);
void sub(float a, float b);
void mul(float a, float b);
void div(float a, float b);

int main(){

    float x;
    float y;
    char op;

        printf("Enter your 1st number: ");
          scanf("%f", &x);

          printf("Enter your 2nd number: ");
            scanf("%f",&y);

            printf("Choose your operator('+','-','/','*'): ");
              scanf(" %c", &op);

              if(op=='+'){
                add(x,y);
              }  else if(op=='-'){
                sub(x,y);
              } else if(op=='*'){
                mul(x,y);
              }  else if(op=='/'){
                div(x,y);
              } else {
                printf("Enter invalid input!");
              }






    return 0;
}
void add(float a, float b){
     float sum = a+b;
     printf("sum is: %.2f\n", sum);
}
void sub(float a, float b){
    float sub = a-b;
    printf("subtract is: %.2f\n", sub);
}
void mul(float a, float b){
    float mul =a*b;
    printf("Multiply is: %.2f\n", mul);
}
void div(float a, float b){
    float div = a/b;
    printf("Div is: %.2f\n", div);
}