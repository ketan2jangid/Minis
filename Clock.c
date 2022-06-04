//Digital Clock

#include <stdio.h>
#include <time.h>

int main(){
	time_t s, val=1;
	
	while(1){
		struct tm* current_time;
	
		s=time(NULL);
		current_time = localtime(&s);
		
		system("cls");
		printf("%0.2d : %0.2d : %0.2d \n", current_time->tm_hour, current_time->tm_min, current_time->tm_sec);
		
		sleep(1);
	}
}

