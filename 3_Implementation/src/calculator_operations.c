#include "calculator_operations.h"
int sum(calculate *compute){
   int result=compute->value1+compute->value2;
   printf("%d + %d = %d\n",compute->value1,compute->value2,result);
   return result;
}
int substraction(calculate *compute){
    int result=compute->value1-compute->value2;
    printf("%d - %d = %d\n",compute->value1,compute->value2,result);
    return result;
}
int multiplication(calculate *compute){
    int result=compute->value1*compute->value2;
     printf("%d * %d = %d\n",compute->value1,compute->value2,result);
     return result;}
int division(calculate *compute){
    int result= compute->value1/compute->value2;
      printf(" quotient when %d / %d = %d\n",compute->value1,compute->value2,result);
      printf(" remainder when %d / %d = %d\n",compute->value1,compute->value2,compute->value1%compute->value2);
      return result;}
int squareroot(trigonometric *tri){
     float result=sqrt(tri->angle);
     printf("squareroot of %d = %.3f\n",tri->angle,result);
     return result;
}
int power(calculate *compute){
int result= pow(compute->value1,compute->value2);
 printf("%d ^%d = %d\n",compute->value1,compute->value2,result);
 return result;
}
int sine(trigonometric *tri){
float result= sin(tri->angle);
 printf("sin %d = %.3f\n",tri->angle,result);
 return result;
}
int cosine(trigonometric *tri){
float result=cos(tri->angle);
 printf("cos %d = %.3f\n",tri->angle,result);
  return result;
}
int ttan(trigonometric *tri){
float result= tan(tri->angle);
 printf("tan %d = %.3f\n",tri->angle,result);
 return result;
}
int cosec(trigonometric *tri){
float result=1/sin(tri->angle);
 printf("cosec %d = %.3f\n",tri->angle,result);
 return result;
}
int sec(trigonometric *tri){
float result=1/cos(tri->angle);
 printf("sec %d = %.3f\n",tri->angle,result);
 return result;
}
int cot(trigonometric *tri){
float result= 1/tan(tri->angle);
 printf("cot %d = %.3f\n",tri->angle,result);
 return result;
}
int exponent(trigonometric *tri){
float result= exp(tri->angle);
 printf("e ^%d = %.3f\n",tri->angle,result);
 return result;
}
int factorial(trigonometric *tri){
    long long int fact=1;
    if(tri<0)
        printf("factorial of negative numbers doesn't exist");
    for (int i = 1; i <= tri->angle;i++) {
            fact *= i;
        }
 printf("%d!= %lld\n",tri->angle,fact);
 return fact;
}
