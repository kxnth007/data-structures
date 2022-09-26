#include<stdio.h>
#include<conio.h>
long int mul(int n);
int main()
{
	int n;
	printf("enter number:");
	scanf("%d",&n);
	printf("factorial of %d is %d",n,mul(n));
	return 0;
}
long int mul(int n)
{
	if(n>=1)
	{
		return n*mul(n-1);
	}
	else
	{
		return 1;
	}
}

SAMPLE OUTPUT:	
enter number:6
factorial of 6 is 720
