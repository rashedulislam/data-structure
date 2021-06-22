#include <stdio.h>

int selection_sort ( int A[], int n ){
    int i, j, index_min, temp;
    for ( i = 0; i < n-1; i++){
        index_min = i;
        for (j = i+1; j < n; j++){
            if (A[j] < A [index_min]){
                index_min = j;
            }
        }

        if ( index_min != i ){
            temp = A[i];
            A[i] = A[index_min];
            A[index_min] = temp;
        }
        
    }
}

int main()
{
  int array[100], c, n, result;

  printf("Enter number of elements in array\n");
  scanf("%d", &n);

  printf("Enter %d integer(s)\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  selection_sort ( array, n );

  for ( c = 0; c < n; c++){
      printf("%d ", array[c]);
  }
  return 0;
}