#include<stdio.h>
int main(){
	int num;
	int fact=1;
	printf("Enter a number :");
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		fact=fact*i;
		printf("FACTORIAL NUMBER IS %d \n:",fact);
	}
}
