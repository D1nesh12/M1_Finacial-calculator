
#include "unity.h"
#include "feature.h"
#include <math.h>

void test_cagr(void);
void test_discountcalculator(void);
void test_ppf(void);
void test_emi(void);
void test_rd(void);
void test_fd(void);
void test_lumpsum(void);
void test_sip(void);


void setUp(){}
/**
 * @brief Required by the unity test framework
 * 
 */
void tearDown(){}

/**
 * @brief Start of the application test
 * 
 * @return int 
 */
int main()
{
  UNITY_BEGIN();

/**
 * @brief Run Test functions
 * 
 */
  RUN_TEST(test_cagr);
  RUN_TEST(test_discountcalculator);
  RUN_TEST(test_ppf);
  RUN_TEST(test_emi);
  RUN_TEST(test_rd);
  RUN_TEST(test_fd);
  RUN_TEST(test_lumpsum);
  RUN_TEST(test_sip);

  /**
   * @brief Close the Unity Test Framework
   * 
   * @return return 
   */
  return UNITY_END();
}

/**
 * @brief Test Functions
 * 
 */
void test_cagr(void) {
  TEST_ASSERT_EQUAL(4, cagr(100, 1000, 2));
}

void test_discountcalculator(void) {
  TEST_ASSERT_EQUAL(4, discountcalculator(100, 2));
}

void test_ppf(void) {
  TEST_ASSERT_EQUAL(5, ppf(100, 2));
}

void test_emi(void) {
  TEST_ASSERT_EQUAL(0, emi(100, 2, 2));
}

void test_rd(void) {
  TEST_ASSERT_EQUAL(7, rd(100, 2, 2));
}

void test_fd(void) {
  TEST_ASSERT_EQUAL(6, fd(100, 2, 2));
}

void test_sip(void) {
  TEST_ASSERT_EQUAL(6, sip(100, 2, 2));
}

void test_lumpsum(void) {
  TEST_ASSERT_EQUAL(6, lumpsum(100, 2, 2));
}