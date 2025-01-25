# bac.c
Blood Alcohol Content API in C.

[![Test](https://github.com/eiriksm/bac.c/actions/workflows/test.yml/badge.svg)](https://github.com/eiriksm/bac.c/actions/workflows/test.yml)

## Usage

```c
#include "bac.h"
#include <stdio.h>

int main(void) {
  // The timestamps are from 20:00 to 21:00.
  float bac_for_some_man_after_drinking_for_one_hour_one_beer = bac_for_men_from_weight_and_alcohol_grams(70.0, 19.0, 1737831600, 1737835200);
  // Prints BAC for some man is 0.249160.
  printf("BAC for some man is %f\n", bac_for_some_man_after_drinking_for_one_hour_one_beer);
  return 0;
}
```

## Licence

MIT
