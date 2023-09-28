#include<stdio.h>
int collatz(int m);
int c=0;
int main()
{
	int n,c;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("0");
	}
	else if(n==1)
	{
		printf("0");
	}
	else
	{
		c=collatz(n);
		printf("%d",c);
	}
}
int collatz(int m)
{
    int n=m;
	if(n%2==0)
	{
		n=n/2;
		c++;
		if(n!=1)
		{
			collatz(n);
		}
		else
		{
			return c;
		}
	}
	else
	{
		n=(3*n)+1;
		c++;
		if(n!=1)
		{
			collatz(n);
		}
		else
		{
			return c;
		}
	}
}