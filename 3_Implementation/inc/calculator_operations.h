#include <stdio.h>
#include <math.h>
#include<stdlib.h>
typedef struct cal{
    int value1;
    int value2;
}cal;
cal *compute;
typedef struct trigonometric{
	int angle;
}trigonometric;
trigonometric *deg;
int sum(cal *compute);
int substraction(cal *compute);
int multiplication(cal *compute);
int division(cal *compute);
int squareroot(trigonometric *deg);
int power(cal *compute);
int sine(trigonometric *deg);
int cosine( trigonometric *deg);