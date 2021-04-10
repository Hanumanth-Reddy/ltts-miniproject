#include "calculator_operations.h"
int sum(calculate *compute){
   int result=compute->value1+compute->value2;
   printf("%d + %d = %d\n",compute->value1,compute->value2,result);
}
int substraction(calculate *compute){
    int result=compute->value1-compute->value2;
    printf("%d - %d = %d\n",compute->value1,compute->value2,result);
}
int multiplication(calculate *compute){
    int result=compute->value1*compute->value2;
     printf("%d - %d = %d\n",compute->value1,compute->value2,result);}
int division(calculate *compute){
    int result= compute->value1/compute->value2;
      printf(" quotient when %d / %d = %d\n",compute->value1,compute->value2,result);
      printf(" remainder when %d / %d = %d\n",compute->value1,compute->value2,compute->value1%compute->value2);}
int squareroot(trigonometric *tri){
     int result=sqrt(tri->angle);
     printf("squareroot of %d = %d\n",tri->angle,result);
}
int power(calculate *compute){
int result= pow(compute->value1,compute->value2);
 printf("%d ^%d = %d\n",compute->value1,compute->value2,result);
}
int sine(trigonometric *tri){
float result= sin(tri->angle);
 printf("sin %d = %.3f\n",tri->angle,result);
}
int cosine(trigonometric *tri){
float result=cos(tri->angle);
 printf("cos %d = %.3f\n",tri->angle,result);
}