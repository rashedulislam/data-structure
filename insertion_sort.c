#include <stdio.h>

int insertion_sort ( int A[], int n ){
    int i, j, item;
    for ( i = 1; i < n; i++){

        item = A[i];
        j = i - 1;

        while ( j >= 0 && A[j] > item ){
            A[j+1] = A[j];
            j = j -1;
        }
        A[j+1] = item;
    }
}

int main()
{
  int array[100], c, n;

  printf("Enter number of elements in array\n");
  scanf("%d", &n);

  printf("Enter %d integer(s)\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  insertion_sort ( array, n );

  for ( c = 0; c < n; c++){
      printf("%d ", array[c]);
  }
  return 0;
}