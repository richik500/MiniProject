/**
 * @file unit_test.c
 * @brief contains all the test functions with expexted output by providing default input.
 * @copyright Copyright (c) 2021
 */
#include "../unity/unity.h"
#include "../inc/calc_header.h"
#include "../src/functions.c"
#include<math.h>
#define PROJECT_NAME    "CALCULATOR"
static cal testcal={8,4};
static cal testcal0 = { 4,4 };
static cal testcal2 = { 30,0 };
static cal testcal3 = { -30,0 };
statsic cal testcal1 = { -4,-1 };
statsic cal testdiv0 = { 4,0 };
/* Prototypes for all the test functions */
void test_add(void);
void test_sub(void);
void test_mul(void);
void test_div(void);
void test_division_byZero(void);
void test_pow(void);
void test_root(void);
void test_sin(void);
void test_cos(void);
void test_tan(void);
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
  RUN_TEST(test_add);
  RUN_TEST(test_sub);
  RUN_TEST(test_mul);
  RUN_TEST(test_div);
  RUN_TEST(test_division_byZero);
  RUN_TEST(test_pow);
  RUN_TEST(test_root);
  RUN_TEST(test_sin);
  RUN_TEST(test_cos);
  RUN_TEST(test_tan);
  RUN_TEST(test_sec);
  RUN_TEST(test_cosec);
  RUN_TEST(test_cot);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* all test functions */ 
void test_sum(void) {
  TEST_ASSERT_EQUAL(12,addn(&testcal));
   TEST_ASSERT_EQUAL(-5,addn(&testcal1)); /* negative number input case  */
   }
void test_sub(void) {
  TEST_ASSERT_EQUAL(4,subn(&testcal));
  TEST_ASSERT_EQUAL(-3,subn(&testcal1)); /* negative number input case  */
}
void test_mul(void) {
  TEST_ASSERT_EQUAL(32,muln(&testcal));
  TEST_ASSERT_EQUAL(4,muln(&testcal1)); /* negative number input case  */
}
void test_div(void) {
  TEST_ASSERT_EQUAL(2,divn(&testcal));
  TEST_ASSERT_EQUAL(4,divn(&testcal1)); /* negative number input case  */
}
/*division when divisor is 0 */
void test_division_byZero(void){
   TEST_ASSERT_EQUAL(-1, divn(&testdiv0));
}
void test_pow(void) {
  TEST_ASSERT_EQUAL(4096,pown(&testcal));
   TEST_ASSERT_EQUAL(-0.25,pown(&testcal1)); /* negative number input case  */
}
void test_root(void) {
  TEST_ASSERT_EQUAL(2,rootn(&testcal0));
  TEST_ASSERT_EQUAL(-1,rootn(&testcal1)); 
}
void test_sin(void) {
  TEST_ASSERT_EQUAL(0.500,sinn(&testcal2));
  TEST_ASSERT_EQUAL(-0.500,sinn(&testcal3)); /* negative number input case  */
}
void test_cos(void) {
  TEST_ASSERT_EQUAL(0.866,cosn(&testcal2));
  TEST_ASSERT_EQUAL(0.866,cosn(&testcal3)); /* negative number input case  */
}
void test_tan(void) {
  TEST_ASSERT_EQUAL(0.577,tann(&testcal2));
   TEST_ASSERT_EQUAL(-0.577,tann(&testcal3)); /* negative number input case  */
}
void test_sec(void) {
  TEST_ASSERT_EQUAL(1.154,sec(&testcal2));
   TEST_ASSERT_EQUAL(1.154,sec(&testcal3)); /* negative number input case  */
}
void test_cosec(void) {
	TEST_ASSERT_EQUAL(2.000, cosec(&testcal2));
	TEST_ASSERT_EQUAL(-2.000, cosec(&testcal3)); /* negative number input case  */
}
void test_cot(void) {
  TEST_ASSERT_EQUAL(1.732,cot(&testcal2));
  TEST_ASSERT_EQUAL(-1.732,cot(&testcal3)); /* negative number input case  */
}

