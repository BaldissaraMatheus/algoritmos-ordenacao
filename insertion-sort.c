#include <stdio.h>

void insertionSort(int arr[], int len);
void printArray(int arr[], int len);

void main() {
  int inputArr[] = {2, 8, 5, 3, 2, 4, 1};
  int arrLen = sizeof(inputArr)/sizeof(int);

  printArray(inputArr, arrLen);
  insertionSort(inputArr, arrLen);
  printArray(inputArr, arrLen);
};

void insertionSort(int arr[], int len) {
  for (int i = 1; i < len; i++) {
    int j = i;

    while (j > 0 && arr[j-1] > arr[j]) {
      int aux = arr[j-1];
      arr[j-1] = arr[j];
      arr[j] = aux;
      j--;
    }
  }
}

void printArray(int arr[], int len) {
  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }
  
  printf("\n");
}