#include <stdio.h>
#include <stdlib.h>

void bubblesort(int feld[], int len);
void printarray(int feld[], int len);

/*
 * Run code with pythontutor:
 *
 *   - http://shorturl.at/dvS38
 */

int main() {
  int unsorted[] = { 4, 2, 13, 1, 0, 3, 26, 3 };

  printarray(unsorted, 8);
  bubblesort(unsorted, 8);
  printarray(unsorted, 8);
  
  return EXIT_SUCCESS;
}

void bubblesort(int feld[], int len) {
  int i, j, h;
  
  for (j = len - 1; j > 0; j = j - 1) {
    for (i = 0; i < j; i = i + 1) {
      if (feld[i] > feld[i + 1]) {
        // Tausche
        h = feld[i];
        feld[i] = feld[i + 1];
        feld[i + 1] = h;
      }
    }
  }
}

void printarray(int feld[], int len) {
  printf("{ ");
  for (int i = 0; i < len; i++) {
    printf("%d, ", feld[i]);
  }
  printf("}\n");
}