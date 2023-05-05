#include <stdio.h>
int main() {
  int arr[3][3];
  int *p = &arr[0][0];
  int i, j, sum = 0;
  printf("Enter the elements of the array:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", p + i * 3 + j);
    }
  }
  printf("The elements of the array are:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d ", *(p + i * 3 + j));
    }
    printf("\n");
  }
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      if (i == j) {
        sum += *(p + i * 3 + j);
      }
    }
  }
  printf("The sum of diagonal elements is %d\n", sum);
  return 0;
}