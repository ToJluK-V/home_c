#include <stdio.h>

int main(int argc, char **argv)
{
	int userInput;
	int sum = 0;

	scanf("%d",&userInput);

	if(userInput<0) userInput = userInput*(-1);
	
	while(userInput!=0)
	{
		sum = sum + userInput%10;
		userInput = userInput/10;
	}
	
	printf("%d", sum);
		
	return 0;
}


