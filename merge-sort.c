#include <stdio.h>
#include "helper.h"

void mergeSort(int arr[], int beg, int end);
void sort(int arr[], int beg, int mid, int end);

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
  int i = mid+1;

  while (arr[i-1] > arr[i] && i <= end) {
    int j = i;

    while (arr[j-1] > arr[j] && j-1 >= beg) {   
      int aux = arr[j];
      arr[j] = arr[j-1];
      arr[j-1] = aux;
      j--;
    }

    i++;
  }
  return;
}