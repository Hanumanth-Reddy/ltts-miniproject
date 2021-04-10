/**
 * @file calculator_operations.h
 * @author 265101
 * @ scietific calculator operations
 */
#ifndef __CALCULATOR_OPERATIONS_H__
#define __CALCULATOR_OPERATIONS_H__
#include <stdio.h>
#include <math.h>
#include<stdlib.h>
/**
 * stucture which has variale of calculate
 * 
 */
typedef struct calculate{
    int value1;
    int value2;
}calculate;
calculate *compute;
typedef struct trigonometric{
	int angle;
}trigonometric;
trigonometric *deg;
int sum(calculate *compute);
int substraction(calculate *compute);
int multiplication(calculate *compute);
int division(calculate *compute);
int squareroot(trigonometric *deg);
int power(calculate *compute);
int sine(trigonometric *deg);
int cosine( trigonometric *deg);
int ttan( trigonometric *deg);
int cosec( trigonometric *deg);
int sec( trigonometric *deg);
int cot( trigonometric *deg);
int exponent(trigonometric *deg);
int factorial(trigonometric *deg);
#endif  /* #define __calculateCULATOR_OPERATIONS_H__ */