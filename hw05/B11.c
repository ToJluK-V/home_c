#include <stdio.h>

int main(int argc, char **argv)
{
	int userInput;
	int lastDigit;
	int reversed = 0;
	
	scanf("%d",&userInput);

	if(userInput<0) userInput = userInput*(-1);
	
	while(userInput!=0)
	{
		lastDigit = userInput%10;
		userInput = userInput/10;
		reversed = reversed * 10 + lastDigit;
		
	}
	
	printf("%d",reversed);
		
	return 0;
}

