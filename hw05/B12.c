#include <stdio.h>

int main(int argc, char **argv)
{
	int userInput;
	int lastDigit;
	int maxDigit;
	int minDigit;
	
	scanf("%d",&userInput);

	if(userInput<0) userInput = userInput*(-1);
	
	maxDigit = userInput%10;
	minDigit = maxDigit;
	
	while(userInput!=0)
	{
		lastDigit = userInput%10;
		userInput = userInput/10;
		
		if(lastDigit > maxDigit) maxDigit = lastDigit;
		if (lastDigit < minDigit) minDigit = lastDigit;
		
	}
	
	printf("%d %d",minDigit, maxDigit);
		
	return 0;
}

