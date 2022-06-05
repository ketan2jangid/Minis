//Guess the number

#include <stdio.h>

void guess(int b);

int main(){
	char select;
	
	printf("*****   GUESS THE NUMBER    ***** \n");
	do{
		printf("Select the difficulty level - \n");
		printf("1.EASY  \t(1-10) \n2.MEDIUM \t(1-30) \n3.HARD  \t(1-50) \n");
		printf("OR press Q to exit \n");
		select=getch();
		printf("\n");
		
		switch(select){
			case '1':	guess(10);
				break;
			case '2':	guess(30);
				break;
			case '3':	guess(50);
				break;
			case 'Q':
			case 'q':	
				break;
			default:	printf("Err! Invalid Input \n");
		}
		printf("\n");
	}while(select!='Q' && select!='q');
	
	return 0;
}

void guess(int b){
	srand(time(NULL));
	
	int num=rand()%b +1;
	int guess;
	
	printf("Guess the number \n");
	scanf("%d",&guess);
	
	if(guess==num){
		printf("Whoaaa! You guessed it right \n");
		return;
	}else{
		printf("Nope! Give it another try ;) \n");
		scanf("%d",&guess);
		
		if(guess==num){
			printf("Yey! You did it \n");
			return;
		}else{
			printf("Be careful! It's your last chance \n");
			scanf("%d",&guess);
			
			if(guess==num){
				printf("Phew! Finally you guessed it right \n");
				return;
			}else{
				printf("Better Luck next time \n");
				return;
			}
		}
	}
}
