#include<stdio.h>
int main(){
	int num;
	printf("Enter a number :");
	scanf("%d",&num);
	for(int i=1;i<=10;i++){
		printf("The table is %d*%d=%d\n :",num,i, (num*i));
	}
}
