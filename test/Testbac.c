#include "unity.h"
#include "bac.h"

void setUp(void) {
}

void tearDown(void) {
}

void test_get_bac_cases(void) {
  int num_cases = 1;
  float cases[1][5] = {
    { 70.0, 19.0, 1737831600, 1737843960, 0.2},
  };
  for (int i = 0; i < num_cases; i++) {
    float weight = cases[i][0];
    float alcohol_grams = cases[i][1];
    int start_time = cases[i][2];
    int end_time = cases[i][3];
    float expected = cases[i][4];
    float bac = bac_from_weight_and_alcohol_grams(weight, alcohol_grams, start_time, end_time);
    TEST_ASSERT_EQUAL_FLOAT(expected, bac);
  }
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_get_bac_cases);
  return UNITY_END();
}
