#include "unity.h"
#include "calculator_operations.h"
#define PROJECT_NAME    "Calculator"
calculate testcal={10,5};
trigonometric testo={4};
calculate testcal1={3,2},testdiv0={3,0};
trigonometric testo1={6};
trigonometric testf1={0};
trigonometric testf2={-5};
/* Prototypes for all the test functions */
void test_sum(void);
void test_substraction(void);
void test_multiplication(void);
void test_division(void);
void test_exponent(void);
void test_factorial(void);
void test_root(void);
void test_power(void);
void test_sine(void);
void test_cosine(void);
void test_ttan(void);
void test_sec(void);
void test_cosec(void);
void test_cot(void);
void test_zero_factorial(void);
void test_negative_factorial(void);
void test_division_byZero(void);
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_sum);
  RUN_TEST(test_substraction);
  RUN_TEST(test_multiplication);
  RUN_TEST(test_division);
  RUN_TEST(test_division_byZero);
  RUN_TEST(test_root);
  RUN_TEST(test_power);
  RUN_TEST(test_exponent);
  RUN_TEST(test_factorial);
  RUN_TEST(test_zero_factorial);
  RUN_TEST(test_negative_factorial);
  RUN_TEST(test_sine);
  RUN_TEST(test_cosine);
  RUN_TEST(test_ttan);
  RUN_TEST(test_cosec);
  RUN_TEST(test_sec);
  RUN_TEST(test_cot);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* all test functions */ 
void test_sum(void) {
  TEST_ASSERT_EQUAL(15,sum(&testcal));
   TEST_ASSERT_EQUAL(5,sum(&testcal1));
}
void test_substraction(void) {
  TEST_ASSERT_EQUAL(5,substraction(&testcal));
  TEST_ASSERT_EQUAL(1,substraction(&testcal1));
}
void test_multiplication(void) {
  TEST_ASSERT_EQUAL(50,multiplication(&testcal));
  TEST_ASSERT_EQUAL(6,multiplication(&testcal1));
}
void test_division(void) {
  TEST_ASSERT_EQUAL(2,division(&testcal));
  TEST_ASSERT_EQUAL(1,division(&testcal1));
}
/*division when divisor is 0 */
void test_division_byZero(void){
   TEST_ASSERT_EQUAL(-1, division(&testdiv0));
}
void test_power(void) {
  TEST_ASSERT_EQUAL(100000,power(&testcal));
   TEST_ASSERT_EQUAL(9,power(&testcal1));
}
void test_root(void) {
  TEST_ASSERT_EQUAL(2,squareroot(&testo));
  TEST_ASSERT_EQUAL(2.449,squareroot(&testo1));
}
void test_factorial(void) {
  TEST_ASSERT_EQUAL(24,factorial(&testo));
  TEST_ASSERT_EQUAL(720,factorial(&testo1));
}
void test_exponent(void) {
  TEST_ASSERT_EQUAL(54.598,exponent(&testo));
   TEST_ASSERT_EQUAL(403.428,exponent(&testo1));
}
void test_sine(void) {
  TEST_ASSERT_EQUAL(-0.756,sine(&testo));
  TEST_ASSERT_EQUAL(-0.279,sine(&testo1));
}
void test_cosine(void) {
  TEST_ASSERT_EQUAL(-0.653,cosine(&testo));
  TEST_ASSERT_EQUAL(-0.960,cosine(&testo1));
}
void test_ttan(void) {
  TEST_ASSERT_EQUAL(1.157,ttan(&testo));
   TEST_ASSERT_EQUAL(-0.291,ttan(&testo1));
}
void test_sec(void) {
  TEST_ASSERT_EQUAL(-1.529,sec(&testo));
   TEST_ASSERT_EQUAL(1.414,sec(&testo1));
}
void test_cot(void) {
  TEST_ASSERT_EQUAL(0.863,cot(&testo));
  TEST_ASSERT_EQUAL(-3.463,cot(&testo1));
}
void test_cosec(void) {
  TEST_ASSERT_EQUAL(-1.321,cosec(&testo));
   TEST_ASSERT_EQUAL(-3.578,cosec(&testo1));
}

/*factorial of 0*/
void test_zero_factorial(void)
{
  TEST_ASSERT_EQUAL(1, factorial(&testf1));
}

/*factorial of negative numbers */
void test_negative_factorial(void)
{
  TEST_ASSERT_EQUAL(-1, factorial(&testf2));
}
