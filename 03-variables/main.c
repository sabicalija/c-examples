#include <stdio.h>
#include <stdlib.h>

int main() {
  
  // Primitive Datatypes
  int integer = 3;
  char character = 'a';
  float floating_point = 3.1415926535897932384626433832795028841971;
  double double_precision = 3.1415926535897932384626433832795028841971;

  printf("%d\n", integer);
  printf("%c\n", character);
  printf("%f\n", floating_point);
  printf("%lf\n", double_precision);


  // Abstract/User-defined Datatypes
  char* s = "Hello World!";
  FILE* f = fopen("text.txt", "w");

  printf("%s\n", s);

  return EXIT_SUCCESS;
}