#include<stdio.h>
static int sum=1;
void fibo(int c)
{
	static int t1=0,t2=1,t3,count=3 ;
	if(count<=c)
	{
		t3=t1+t2;
		sum=sum+t3;
		printf("%d\n",t3);
		t1=t2;
		t2=t3;
		count++;
		fibo(c);	
	}

}
int main()
{
	int n;
	printf("enter a num=");
	scanf("%d",&n);
	switch (n)
	{
	      case 1: 
		         printf("0\n1");
		         printf("sum is zero");
	        break;
	        case 2:printf("0\n1\n");
			        printf("sum is 1");
	         break;
	       default : printf("0\n1\n");
		            	fibo(n);
		            		printf("sum of fibonacci series=%d",sum);
	}
	return 0;
}


/*OUTPUT*/

enter a num=7
0
1
1
2
3
5
8
sum of fibonacci series=20
