#include <stdio.h>
#include <stdlib.h>

int add(int x, int y);
int sub(int x, int y);

int main() {

  int a = 10;
  int b = 20;

  // Calculate sum
  int sum = add(a, b);
  printf("The sum of %d and %d is %d.\n", a, b, sum);

  // Calculate difference
  printf("The difference of %d and %d is %d.\n", a, b, sub(a,b));
  return EXIT_SUCCESS;
}

int add(int x, int y) {
  int result = x + y;
  return result;
}

int sub(int x, int y) {
  int result = x - y;
  return result;
}