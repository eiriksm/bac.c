#include "unity.h"
#include "bac.h"

void setUp(void) {
}

void tearDown(void) {
}

void test_get_bac_cases_for_men(void) {
  int num_cases = 2;
  float cases[2][6] = {
    { 70.0, 19.0, 1737831600, 1737843960, 0.0},
    { 94.0, 38.0, 1737831600, 1737835200, 0.44},
  };
  for (int i = 0; i < num_cases; i++) {
    float weight = cases[i][0];
    float alcohol_grams = cases[i][1];
    int start_time = cases[i][2];
    int end_time = cases[i][3];
    float expected = cases[i][4];
    float bac = bac_for_men_from_weight_and_alcohol_grams(weight, alcohol_grams, start_time, end_time);
    // Round to 2 decimal places.
    float bac_rounded = ((int) (bac * 100 + .5) / 100.0);
    TEST_ASSERT_EQUAL_FLOAT(expected, bac_rounded);
  }
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_get_bac_cases_for_men);
  return UNITY_END();
}
