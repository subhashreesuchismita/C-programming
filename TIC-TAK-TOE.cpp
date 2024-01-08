#include<stdio.h>
int printBoard();
int checkwin();
int system();
int z=1;
char board[]={'0','1','2','3','4','5','6','7','8','9'};
int main(){
int player=1,input,status=-1;
while(status!=9)
{
	player=(player%2==0)?2:1;
	char mark=(player==1)? 'x':'o';
	printf("please enter number %d\n",player);
scanf("%d",&input);
if(input>1 || input>9){
	printf("invalid input");
}
board[input]=mark;
status=printBoard();
int result=checkwin();
if(result==1)
{
	printf("winner");
}
else if(result==0)
{
	printf("Draw");
}
player++;
}
return 0;
}
int printBoard(){
	
int	system("cls");
	printf("\n\n");
  printf("   TIC TAC TOE   \n");
	printf("   |    |   \n");
	printf(" %c | %c  | %c \n",board[1],board[2],board[3]);
	printf("   |    |   \n");
	printf("___________\n");
	printf("   |    |   \n");
	printf(" %c | %c  | %c\n",board[4],board[5],board[6]);
	printf("___________\n");
	printf("   |    |   \n");
	printf(" %c | %c  | %c\n",board[7],board[8],board[9]);
	printf("   |    |   \n");
	printf("\n\n");
	return z++;
}
int checkwin(){
	int i;
	if(board[1]==board[2] && board[2]==board[3]){
		return 1;
	if(board[1]==board[4] && board[4]==board[7]){
		return 1;
	}	
	if(board[7]==board[8] && board[8]==board[9]){
	return 1;
}
	if(board[3]==board[6] && board[6]==board[9]){
		return 1;
	}
	if(board[1]==board[5] && board[5]==board[9]){
		return 1;
		}
	if(board[3]==board[5] && board[5]==board[7]){
		return 1;
	}
	if(board[2]==board[5] && board[5]==board[8]){
		return 1;
	}
	if(board[4]==board[5] && board[5]==board[6]){
		return 1;
	}
	if(board[1]==board[2] && board[2]==board[3]){
		return 1;
	}
	int count=0;
	for( i=0;i<=9;i++)
	{
		if(board[i]=='x'|| board[i]=='0')
		{
			count++;
		}
}
	if (count==9)
	{
		return 0;
	}
return -1;

	}
}



