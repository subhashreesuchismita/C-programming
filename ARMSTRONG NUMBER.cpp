#include<stdio.h>
int main(){
	int num,sum=0,rem;
	printf("ENTER A NUMBER :");
	scanf("%d",&num);
	int temp=num;
    while(temp!=0){
    rem=temp%10;
    sum+=(rem*rem*rem);
    temp/=10;
	}
	if(sum==num){
		printf("Armstrong number");
	}
	else{
		printf("Not a Armstrong number");
	}
}
