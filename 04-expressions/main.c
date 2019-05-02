#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
  
  int zahl = 0;

  if ((10 <= zahl) && (zahl <= 20)) {
    printf("success\n");
  }

  zahl = 15;

  bool ok = (10 <= zahl) && (zahl <= 20);
  if (ok) {
    printf("successful\n");
  }

  return EXIT_SUCCESS;
}