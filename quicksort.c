#include <stdio.h>

void quicksort(int arr[], int beg, int end);
void printArray(int arr[], int len);

void main() {
  int inputArr[] = {2, 8, 5, 3, 2, 4, 1};
  int arrLen = sizeof(inputArr)/sizeof(int);

  printArray(inputArr, arrLen);
  quicksort(inputArr, 0, arrLen - 1);
  printArray(inputArr, arrLen);
}

void quicksort(int arr[], int beg, int end) {

  if (beg == end) {
    return;

  } else {
    int left = beg;
    int right = end;
    int piv = left;

    while (left != right) {

      if (piv == left) {
        if (arr[right] >= arr[piv]) {
            right--;

        } else {
          int aux = arr[piv];
          arr[piv] = arr[right];
          arr[right] = aux;
          piv = right;
        }
        
      } else {
        if (arr[left] <= arr[piv]) {
          left++;

        } else {
          int aux = arr[piv];
          arr[piv] = arr[left];
          arr[left] = aux;
          piv = left;
        }
      }
    }

    if (piv == beg) {
      quicksort(arr, piv+1, end);

    } else if (piv == end) {
      quicksort(arr, beg, piv-1);

    } else {
      quicksort(arr, beg, piv-1);
      quicksort(arr, piv+1, end);
    }
  }

  return;
}

void printArray(int arr[], int len) {
  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }
  
  printf("\n");
}