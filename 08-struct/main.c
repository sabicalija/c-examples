#include <stdio.h>
#include <stdlib.h>

struct Person {
  char* name;
  int age;
};

int main() {
  
  struct Person avenger;
  avenger.name = "Tony Stark";
  avenger.age = 50;

  printf("Name: %s\nAge: %d\n", avenger.name, avenger.age);

  struct Person spiderman = { .name = "Peter Parker", .age = 28};
  printf("Name: %s\nAge: %d\n", spiderman.name, spiderman.age);

  return EXIT_SUCCESS;
}