#include <stdio.h>


int main()
{
    int c, d, swap;
    int n=5;
    int arr[5]={58,89,71,35,6};
    
  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use '<' instead of '>' */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
   for (c = 0; c < n; c++)
     printf("%d\n", array[c]);

  return 0;
}
