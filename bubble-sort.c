#include <stdio.h>
#include "helper.h"

void bubbleSort(int arr[], int len);

void main() {
  int inputArr[] = {2, 8, 5, 3, 2, 4, 1};
  int arrLen = sizeof(inputArr)/sizeof(int);

  printArray(inputArr, arrLen);
  bubbleSort(inputArr, arrLen);
  printArray(inputArr, arrLen);
};

void bubbleSort(int arr[], int len) {
  for (int i = len - 1; i >= 1; i--) {
    for (int j = 0; j < i; j++) {
      if (arr[j] > arr[j+1]) {
        int aux = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = aux;
      }
    }
  }
}