#include <stdio.h>

int linear_search ( int A[], int n, int x ){
    int i;
    for ( i = 0; i < n; i++){
        if (A[i] == x ){
            return i;
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


  result = linear_search ( array, n, search );
  if (result >= 0 ){
     printf("%d is present at location %d.\n", search, result+1);
  } else {
     printf("%d isn't present in the array.\n", search);
  }
  
  
//   for (c = 0; c < n; c++)
//   {
//     if (array[c] == search)
//     {
//       printf("%d is present at location %d.\n", search, c+1);
//       break;
//     }
//   }
//   if (c == n)
//     printf("%d isn't present in the array.\n", search);

  return 0;
}