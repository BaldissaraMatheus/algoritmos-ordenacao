#include <stdio.h>

void mergeSort(int arr[], int beg, int end);
void sort(int arr[], int beg, int mid, int end);
void printArray(int arr[], int len);

void main() {
  int inputArr[] = {2, 8, 5, 3, 2, 4, 1};
  int arrLen = sizeof(inputArr)/sizeof(int);

  printArray(inputArr, arrLen);
  mergeSort(inputArr, 0, arrLen-1);
  printArray(inputArr, arrLen);
}

void mergeSort(int arr[], int beg, int end) {
  if (beg < end) {
    int mid = (beg + end)/2;
    
    mergeSort(arr, beg, mid);
    mergeSort(arr, mid+1, end);
    sort(arr, beg, mid, end);
  }
  return;
}

void sort(int arr[], int beg, int mid, int end) {
  int i = mid;

  while (arr[i] > arr[i+1] && i+1 <= end) {
    int j = i;

    while (arr[j] > arr[j+1] && j >= beg) {   
      int aux = arr[j+1];
      arr[j+1] = arr[j];
      arr[j] = aux;
      j--;
    }

    i++;
  }
  return;
}

void printArray(int arr[], int len) {
  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }
  
  printf("\n");
}