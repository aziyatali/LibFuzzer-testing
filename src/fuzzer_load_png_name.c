#include "pngparser.h"
#include <stdio.h>


// LibFuzzer stub
int LLVMFuzzerTestOneInput(const uint8_t *Data, size_t Size) {
  struct image *test_img;
  char *filename = (char)Data;

  if (load_png(filename, test_img) == 0)
  	free(test_img);

    // Always return 0
    return 0;
}
