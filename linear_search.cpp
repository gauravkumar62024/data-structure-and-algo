#include <stdio.h>
void Linear_Search(int arr[],int n)
{
	int i;
	 for (i = 0; i < n; i++)
       {
                    if (arr[i] == n) 
                           {
                               printf("%d is present at index position %d.\n", n, i+1);
                               break;
                            }
        }
  if (i == n)
    printf("%d given number is noy found in the array.\n", n);

}
int main()
{
  int arr[100], search, i, n;

  printf("Enter number of elements in array\n");
  scanf("%d", &n);

  printf("Enter %d integer(s)\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);
    
  printf("Enter a number to search\n");
  scanf("%d", &search);
  Linear_Search(arr,search);
  return 0;
}

/*OUTPUT*/

Enter number of elements in array
8
Enter 8 integer(s)
12
23
45
56
73
1
13
21
Enter a number to search
21
21 is present at index position 8.
