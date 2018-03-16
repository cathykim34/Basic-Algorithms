#include <stdio.h>
int Array[12] = {20, 13, 6, -1, 15, 29, 4, 2, 18, 10, -4, 15};
void PrintArray(int Arr[], int n) {
  int i;
  for (i=0; i < n; i++) {
    printf("%d ", Arr[i]);
  }
}
void Swap(int *x, int *y) {
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

void BubbleSort(int Arr[], int n) {
  int i, j;
  for (i = n-2; i >= 0; i--) {
    for (j = 0; j <= i; j++) {
      if (Arr[j] > Arr[j+1]) {
	Swap(&Arr[j], &Arr[j+1]);
      }
    }
  }
}
int main() {
  BubbleSort(Array, 12);
  printf("The sorted array is: ");
  PrintArray(Array, 12);
  printf("\n");
}
[cathykim@csa2 pa0]$ cat search.c
#include <stdio.h>

int Array[8] = {1, 2, 3, 4, 5, 6, 9, 10};
void PrintArray(int Arr[], int n) {
  int i;
  for (i=0; i < n; i++) {
    printf("%d ", Arr[i]);
  }
}
void Swap(int *x, int *y) {
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

void BubbleSort(int Arr[], int n) {
  int i, j;
  for (i = n-2; i >= 0; i--) {
    for (j = 0; j<=i; j++){
      if (Arr[j]>Arr[j+1]){
	Swap(&Arr[j], &Arr[j+1]);
      }
    }
  }
}
int BinarySearch(int Arr[], int n, int key) {
  int imin = 0;
  int imax = n-1;
  // continue searching while [imin,imax] is not empty
  while (imin <= imax)
    {
      // calculate the midpoint for roughly equal partition
      int imid = imin + (imax-imin)/2;
      if (Arr[imid] == key)
	// key found at index imid
	// write your code here
	// determine which subarray to search
	return imid;
      else if (Arr[imid] < key)
	// change min index to search upper subarray
	// write your code here
	imin = imid+1;
      else
	// change max index to search lower subarray
	// write your code here
	imax = imid-1;
	}
  // key was not found
  return -1;
}



int main() {
  int key;
  scanf("%d", &key);
  BubbleSort(Array,8);
  printf("The sorted array is: ");
  PrintArray(Array, 8);
  if (BinarySearch(Array,8 , key) == -1){
    printf("key = %d Not found",key);
    }
 else{
   printf("Key = %d found in position %d", key, BinarySearch(Array, 8, key));
}
  printf("\n");
}
