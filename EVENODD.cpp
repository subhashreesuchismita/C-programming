#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number :");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("EVEN NUMBER");
	}
	else if(num%2!=0)
	{
		printf("ODD NUMBER");
	}
}
