#include <stdio.h>
#include <stdlib.h>

int main() {
  
  // Read from file 'db.txt'
  char line[1000];
  FILE* input = fopen("db.txt", "r");
  fscanf(input, "%[^\n]", line);
  printf("%s\n", line);
  fclose(input);

  // Write to new file 'hello.txt'
  char* sentence = "Files are awesome.";
  FILE* output = fopen("hello.txt", "w");
  fprintf(output, "%s", sentence);
  fclose(output);

  return EXIT_SUCCESS;
}