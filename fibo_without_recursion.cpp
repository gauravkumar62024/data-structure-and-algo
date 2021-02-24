#include<stdio.h>
int main()
{
	int n,i,sum=1,t1=0,t2=1,t3;
	printf("enter a number for fibonacci=");
	scanf("%d",&n);
	if(n==0)
	   {
	   	printf("please insert atlest 1 element");
	   }
	else 
	{
	switch (n)
	{
	      case 1: 
		         printf("0\n");
		         printf("sum is zero");
	        break;
	        case 2:printf("0\n1\n");
			        printf("sum is 1");
	         break;
	       default : printf("0\n1\n");
	                  for(i=2;i<n;i++)
					               {
                                      t3=t1+t2;
	                                  sum=sum+t3;
	                                  printf("%d\n",t3);
	                                  t1=t2;
	                                  t2=t3;

                                      }

                               printf("\n\n Sum of all element in fibonacci series=  %d\n\n",sum);
    }
  }
    
}

