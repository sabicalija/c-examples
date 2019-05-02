#include <stdio.h>
#include <stdlib.h>

int main() {
  
  int zahl = 10;

  if (zahl < 10) {
    printf("Low");
  } else if (zahl == 10) {
    printf("Exact");
  } else {
    printf("High");
  }

  return EXIT_SUCCESS;
}