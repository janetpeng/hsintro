#include <stdio.h>
#include <stdlib.h>
// #include <math.h>

void janet() {
  printf("janet\n");
}

// int main() {
//   int i;
//   i = 10;
//   while (i < 100) {
//     // printf("%i\n", i);
//     janet();
//     // i++;
//     i = i + 1;
//   }
//   janet();
//   janet();
// }

int main() {
  int n = 10;
  int i,j;
  for (i = 0; i < n; ++i)
  {
    for (j = 0; j < n; ++j)
    {
      printf("* ");
    }
    printf("\n");
  }

  printf("\n");
  i = 0;

  while (i < n) {
    i++; // ++i
    j = 0;
    while (j < n) {
      j++;
      printf("* ");
    }
    printf("\n");
  }
}
