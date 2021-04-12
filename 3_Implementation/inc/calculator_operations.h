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
 * stucture having 2 member variables value1, value2
 * @param value1
 * @param value2
 */
typedef struct calculate{
    int value1;
    int value2;
}calculate;
calculate *compute; /*struct variable compute which is pointer  initialised as null pointer*/
/**
 * stucture having 1 member variable value3
 * @param value3
 */
typedef struct trigonometric{
	int value3;
}trigonometric;
trigonometric *deg;  /*struct variable deg which is pointer  initialised as null pointer*/
/*function prototypes for all functions*/
/**
*  adds the value1 and value2 and returns the result
* @param[in] value1
* @param[in] value2 
* @return Result of value11 + value2
*/
int sum(calculate *compute);
/**
*  substracts the value1 and value2 and returns the result
* @param[in] value1
* @param[in] value2
* @return Result of value11 - value2
*/
int substraction(calculate *compute);
/**
*  multiply the value1 and value2 and returns the result
* @param[in] value1 
* @param[in] value2
* @return Result of value11 * value2
*/
int multiplication(calculate *compute);
/**
*  divide the value1 and value2 and returns the result
* @param[in] value1 
* @param[in] value2 
* @return Result of value11 / value2 both quotient and remainder
*/
int division(calculate *compute);
/**
*  power of value1 and value2 and returns the result
* @param[in] value1
* @param[in] value2 
* @return Result of value11 ^ value2 
*/
int power(calculate *compute);
/**
*  squareroot of value3(value as integer)
* @param[in] value3; 
* @return Result of sqrt of value3
*/
int squareroot(trigonometric *deg);
/**
* sin of value3 
* @param[in] value3 (value3 is in radian)
* @return Result of sin(value3)
*/
int sine(trigonometric *deg);
/**
* cos of value3
* @param[in] value3 (value3 is in radian) 
* @return Result of cos(value3)
*/
int cosine( trigonometric *deg);
/**
* tan of value3
* @param[in] value3 (value3 is in radian)
* @return Result of tan(value3)
*/
int ttan( trigonometric *deg);
/**
* cose of value3
* @param[in] value3 (value3 is in radian)
* @return Result of cose(value3)
*/
int cosec( trigonometric *deg);
/**
* sec of value3
* @param[in] value3 (value3 is in radian)
* @return Result of sec(value3)
*/
int sec( trigonometric *deg);
/**
* cot of value3
* @param[in] value3 (value3 is in radian)
* @return Result of cot(value3)
*/
int cot( trigonometric *deg);
/**
* exponent of value3(value as intger)
* @param[in] value3 (value as integer)
* @return Result of e^value3
*/
int exponent(trigonometric *deg);
/**
* exponent of value3(value as intger)
* @param[in] value3 (value as integer)
* @return Result of value3!
*/
int factorial(trigonometric *deg);
#endif  /* #define __calculateCULATOR_OPERATIONS_H__ */