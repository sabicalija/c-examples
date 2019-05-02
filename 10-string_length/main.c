#include <stdio.h>
#include <stdlib.h>

int main() {
  
  char* input = "Hello World!";
  int length = 0;

  while (input[length] != '\0') {
    length = length + 1;
  }

  printf("'%s' has %d letters.\n", input, length);

  return EXIT_SUCCESS;
}