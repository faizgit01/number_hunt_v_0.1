#include<stdio.h>
void swap(int* a , int* b );
void ptr(int* a);
int sumptr(int* a, int* b);
void evenodd(int* a);
int ptrincr(int* a);

int main(){
    int x; 
    int y; 
         
          printf("Enter your 1st number: ");
          scanf("%d", &x);
             
            printf("Enter your 2nd number: ");
            scanf("%d", &y);

              swap(&x, &y);

                printf(" after swap : %d %d\n", x, y );
  
 
    //    int n  = 5; // user input
    //    int* ptr = &n ;
    //        printf("address: %p\n", &n);
    //        printf("address: %p\n", &ptr);
    //        printf("value: %d\n", *ptr);
    //        printf("value: %d\n", n);

    //     printf("Enter number: ");
    //     if(scanf("%d", &n) != 1){
    //         printf("Invalid input!");
    //         return 1;
    //     }
           
    //     int res = ptrincr(&n);
    //       printf("Answer: %d", res);
    // printf("Enter number: ");
    // if(scanf("%d", &n) != 1){
    //     printf("Invalid input!\n");
    //  return 1 ;
    // }
    

    // evenodd(&n);
    //   int a ; 
    //   int b ;

    // printf("Enter 1st number: ");
    //  scanf("%d", &a);

    // printf("Enter 2nd number: ");
    //  scanf("%d", &b);

    // int sum =  sumptr(&a, &b);
    // printf("Sum is : %d", sum);

//     // int a = 5;
//     // int* ptr = &a ;

//     // printf("%p\n", &a);
//     // printf("%d\n", *ptr);


// //     int nu;
// //     int nu2;
// //     printf("Enter your 1st number: ");
// //     scanf("%d",&nu );

// //     printf("Enter your 2nd bumber: ");
// //     scanf("%d", &nu2);
     
// //     swap(&nu , &nu2);
// //     printf("After swap: %d  %d", nu, nu2);

    




  return 0;
}


// // void swap(int* a , int* b){

// //     int temp ;
// //     temp = *a ;
// //     *a = *b ; 
// //     *b = temp ;


// }
// void ptr(int* a){
//     int result = *a *2;
//     printf("Answer: %d", result);

// }

// int sumptr(int* a, int* b){
//     int result = *a + *b;
//     return result ;
// }
// void evenodd(int* a){
//     if(*a % 2 == 0 ){
//         printf("Its a even number.\n ");
//     }
//      else if(*a % 2 != 0){
//         printf("Its a odd number.\n ");
//      } 
    
// }
// int ptrincr(int* a){

//     int result = *a + 10 ;
//     return result ;
// }
   void swap(int* a, int* b){

        int temp ;
        temp = *a ;
        *a = *b ;
        *b = temp ;
        
   }