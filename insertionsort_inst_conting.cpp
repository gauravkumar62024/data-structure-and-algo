#include <math.h>
#include <stdio.h>
int static count;
void Insertion_Sort(int arr[], int n)
{
	int i,j,key;
	for (i= 1; i < n; i++) 
	{
		key = arr[i];
		j = i- 1;
		count=count+3;
		while (j >= 0 && arr[j] > key) 
		{

			arr[j + 1] = arr[j];
         	j = j - 1;
          count=count+3;
		}
          count++;
	    	arr[j + 1] = key;
	    	++count;

	} count++;

}

void Print_Array(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
    int n,i ;
    int A[100];

    printf("please enter number of element to be entered: ");
   scanf("%d",&n);

   printf("Enter %d elements: ", n);
   for(i=0;i<n;i++)
      scanf("%d",&A[i]);

	Insertion_Sort(A, n);
	Print_Array(A, n);
	printf("number of instrution executeed is %d",count);

	return 0;
}


/*OUTPUT*/

please enter number of element to be entered: 4
Enter 4 elements: 5
7
6
4
4 5 6 7
number of instrution executeed is 28
