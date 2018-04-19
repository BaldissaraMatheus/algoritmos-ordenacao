#include <stdio.h>

void selectionSort(int arr[], int len);
void printArray(int arr[], int len);

void main() {
  int inputArr[] = {2, 8, 5, 3, 2, 4, 1};
  int arrLen = sizeof(inputArr)/sizeof(int);

  printArray(inputArr, arrLen);
  selectionSort(inputArr, arrLen);
  printArray(inputArr, arrLen);
};

void selectionSort(int arr[], int len) {
  for (int i = 0; i < len - 1; i++) {
    int min = i;
    int j;

    for (j = i + 1; j < len; j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }
    }

    if (min != i) {
      int aux = arr[i];
      arr[i] = arr[min];
      arr[min] = aux;
    }
  }
}

void printArray(int arr[], int len) {
  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }
  
  printf("\n");
}