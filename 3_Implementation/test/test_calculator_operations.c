#include "unity.h"
#include "calculator_operations.h"
#define PROJECT_NAME    "Calculator"
calculate testcal={10,5};
trigonometric testo={4};
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
  RUN_TEST(test_root);
  RUN_TEST(test_power);
  RUN_TEST(test_exponent);
  RUN_TEST(test_factorial);
  RUN_TEST(test_sine);
  RUN_TEST(test_cosine);
  RUN_TEST(test_ttan);
  RUN_TEST(test_cosec);
  RUN_TEST(test_sec);
  RUN_TEST(test_cot);
  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_sum(void) {
  TEST_ASSERT_EQUAL(15,sum(&testcal));
}
void test_substraction(void) {
  TEST_ASSERT_EQUAL(5,substraction(&testcal));
}
void test_multiplication(void) {
  TEST_ASSERT_EQUAL(50,multiplication(&testcal));
}
void test_division(void) {
  TEST_ASSERT_EQUAL(2,division(&testcal));
}
void test_power(void) {
  TEST_ASSERT_EQUAL(100000,power(&testcal));
}
void test_root(void) {
  TEST_ASSERT_EQUAL(2,squareroot(&testo));
}
void test_factorial(void) {
  TEST_ASSERT_EQUAL(24,factorial(&testo));
}
void test_exponent(void) {
  TEST_ASSERT_EQUAL(54.598,exponent(&testo));
}
void test_sine(void) {
  TEST_ASSERT_EQUAL(-0.756,sine(&testo));
}
void test_cosine(void) {
  TEST_ASSERT_EQUAL(-0.653,cosine(&testo));
}
void test_ttan(void) {
  TEST_ASSERT_EQUAL(1.157,ttan(&testo));
}
void test_sec(void) {
  TEST_ASSERT_EQUAL(-1.529,sec(&testo));
}
void test_cot(void) {
  TEST_ASSERT_EQUAL(0.863,cot(&testo));
}
void test_cosec(void) {
  TEST_ASSERT_EQUAL(-1.321,cosec(&testo));
}
