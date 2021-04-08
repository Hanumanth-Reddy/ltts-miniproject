#include "calculator_operations.h"
#include "stdio.h"
#include "math.h"
int sum(cal *compute){
   int result=compute->value1+compute->value2;
}
int sub(cal *compute){
    int result=compute->value1-compute->value2;
}
int mul(cal *compute){
    return compute->value1*compute->value2;
}
int divide(cal *compute){
    int result= compute->value1/compute->value2;
}
int squareroot(cal *compute){
int result=sqrt(compute->value1);
}
int power(cal *compute){
int result= pow(compute->value1,compute->value2);
}
int sine(cal *compute){
float result= sin(compute->value1);
}
int cose(cal *compute){
float result=cos(compute->value1);
}