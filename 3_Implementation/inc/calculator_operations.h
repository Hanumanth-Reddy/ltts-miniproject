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
int sub(cal *compute);
int mul(cal *compute);
int divi(cal *compute);
int squareroot(cal *compute);
int power(cal *compute);
int sine(trigonometric *deg);
int cose( trigonometric *deg);