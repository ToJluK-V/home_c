#include <stdio.h>

int main(int argc, char **argv)
{
	int userInput_a;
	int userInput_b;

	scanf("%d %d",&userInput_a, &userInput_b);
	if((userInput_a < -100 || userInput_a > 100) && (userInput_b < -100 || userInput_b > 100) && userInput_a > userInput_b){
		printf("Wrong number");
		return 0;
	}
	
	while(userInput_a <= userInput_b){
		 printf("%d ", userInput_a*userInput_a);
		 userInput_a++;
	 }
	
	return 0;
}

