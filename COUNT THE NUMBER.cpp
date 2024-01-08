#include<stdio.h>
int main(){
	int num,count=0;
	printf("Enter a number :");
	scanf("%d",&num);
	do
	{
		num/=10;
		count++;
	}
	while(num!=0);
		printf("Count of the number is %d",count);
	
}
