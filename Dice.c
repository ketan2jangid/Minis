//this program rolls a dice

#include <stdio.h>

void roll_dice();
void pattern(int);

//Driver Function
int main(){
	char select;
	
	printf("*****    ROLL A DICE    ***** \n\n");
	do{
		printf("Press SPACE key to roll a dice or Q to exit \n");
		select=getch();							//taking input from keyboard
		
		system("cls");							//clearing console screen
		
		if(select=='Q' || select=='q')					//quit the program if input is q
			printf("Good Bye! \n");
		else if(select==' '){
			printf("Rolling... \n");
			sleep(1);						//adding delay
			system("cls");
			roll_dice();						//function to roll the dice
		}else
			printf("Err! Invalid Input \n");			//invalid input
	}while(select!='Q' && select!='q');
	
	return 0;
}

//Function ehich rolls the dice
void roll_dice(){
	int i;
	srand(time(NULL));
	int num=(rand()%6)+1;							//getting random number in the range 1-6
	
	printf("\n");
	pattern(num);
	printf("\n\n%d \n",num);						//printing number
}

//Function to print the dice face
void pattern(int x){	
	int i,j;
	
	if(x==1){
		for(i=-2; i<=2; i++){
			for(j=-2; j<=2; j++){
				if(i==0 && j==0)
					printf(" O ");
				else
					printf("   ");
			}
			printf("\n");
		}
	}else if(x==2){
		for(i=-2; i<=2; i++){
			for(j=-2; j<=2; j++){
				if((j==-1 || j==1) && i==0)
					printf(" O ");
				else
					printf("   ");
			}
			printf("\n");
		}
	}else if(x==3){
		for(i=-2; i<=2; i++){
			for(j=-2; j<=2; j++){
				if((i==0 && j==0) || (i==j && i*i+j*j==8))
					printf(" O ");
				else
					printf("   ");
			}
			printf("\n");
		}
	}else if(x==4){
		for(i=-2; i<=2; i++){
			for(j=-2; j<=2; j++){
				if(i*i+j*j==2)
					printf(" O ");
				else
					printf("   ");
			}
			printf("\n");
		}
	}else if(x==5){
		for(i=-2; i<=2; i++){
			for(j=-2; j<=2; j++){
				if((i==0 && j==0) || i*i+j*j==8)
					printf(" O ");
				else
					printf("   ");
			}
			printf("\n");
		}
	}else{
		for(i=-2; i<=2; i++){
			for(j=-2; j<=2; j++){
				if((i%2==0) && (j==1 || j==-1))
					printf(" O ");
				else
					printf("   ");
			}
			printf("\n");
		}
	}
}
