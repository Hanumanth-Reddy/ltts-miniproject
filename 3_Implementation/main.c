#include"calculator_operations.h"
int main(){
    cal comp;
    comp.value1=36;
    comp.value2=2;
    sum(&comp);
    sub(&comp);
    mul(&comp);
    divi(&comp);
    power(&comp);
    squareroot(&comp);
    power(&comp);
    sine(&comp);
    cose(&comp);
    return 0;
}