#include <stdio.h>

int binary_search ( int A[], int n, int x ){
    int left = 0, right = n - 1, mid, i;
    while (left <= right ){
        mid = ( left + right ) / 2;
        if ( A[mid] == x ){
            return mid;
        }

        if ( x < A[mid] ){
            right = mid - 1;
        } else {
            left = mid + 1;
        }
        
    }
    i = -1;
    return i;
}

int main()
{
  int array[100], search, c, n, result;

  printf("Enter number of elements in array\n");
  scanf("%d", &n);

  printf("Enter %d integer(s)\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  printf("Enter a number to search\n");
  scanf("%d", &search);


  result = binary_search ( array, n, search );
  if (result >= 0 ){
     printf("%d is present at location %d.\n", search, result+1);
  } else {
     printf("%d isn't present in the array.\n", search);
  }
  
  return 0;
}