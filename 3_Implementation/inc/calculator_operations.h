#include <stdio.h>
#include <math.h>
typedef struct cal{
    int value1;
    int value2;
}cal;

int sum(cal *compute);
int sub(cal *compute);
int mul(cal *compute);
int divi(cal *compute);
int squareroot(cal *compute);
int power(cal *compute);
int sine(cal *compute);
int cose(cal *compute);