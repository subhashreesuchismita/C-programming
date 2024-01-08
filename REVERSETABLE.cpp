#include<stdio.h>
int main(){
	int num;
	printf("Enter a number :");
	scanf("%d",&num);
	
for(int i=10;i>=1;i--){
	printf("Reverse table is %d*%d=%d\n",i,num,(num*i));
}
}
