#include <stdio.h>

int bubble_sort ( int A[], int n ){
    int i, j, temp;
    for ( i = 0; i < n; i++){
        for (j = 0; j < n-i-1; j++){
            if ( A[j] > A[j+1] ){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        } 
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

  bubble_sort ( array, n );

  for ( c = 0; c < n; c++){
      printf("%d ", array[c]);
  }
  return 0;
}