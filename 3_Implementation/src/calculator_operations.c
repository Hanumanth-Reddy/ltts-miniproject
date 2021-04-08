#include "calculator_operations.h"
int sum(cal *compute){
   int result=compute->value1+compute->value2;
   printf("sum=%d\n",result);
}
int sub(cal *compute){
    int result=compute->value1-compute->value2;
    printf("substraction=%d\n",result);
}
int mul(cal *compute){
    int result=compute->value1*compute->value2;
     printf("multiplication=%d\n",result);
}
int divi(cal *compute){
    int result= compute->value1/compute->value2;
     printf("division=%d\n",result);
}
int squareroot(cal *compute){
int result=sqrt(compute->value1);
 printf("root=%d\n",result);
}
int power(cal *compute){
int result= pow(compute->value1,compute->value2);
 printf("power=%d\n",result);
}
int sine(cal *compute){
float result= sin(compute->value1);
 printf("sin=%.3f\n",result);
}
int cose(cal *compute){
float result=cos(compute->value1);
 printf("cos=%.3f\n",result);
}