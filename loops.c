#include <stdio.h>
#include <stdlib.h>
// #include <math.h>

void janet() {
  printf("janet\n");
}

int main() {
  int i;
  i = 10;
  while (i < 100) {
    // printf("%i\n", i);
    // i++;
    i = i + 1;
  }
  janet();
  janet();
}

