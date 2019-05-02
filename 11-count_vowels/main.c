#include <stdio.h>
#include <stdlib.h>

int main() {
  
  char* input = "Hello World!";
  int length = 0;
  int vowels = 0;

  while (input[length] != '\0') {
    char c = input[length];
    if ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
      vowels = vowels + 1;
    }

    length = length + 1;
  }

  printf("'%s' has %d vowels.\n", input, vowels);

  return EXIT_SUCCESS;
}