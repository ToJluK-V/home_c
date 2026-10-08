#include <stdio.h>

int main(int argc, char **argv)
{
	int userInput;
	int lastDigit;
	
	int evenCount=0;
	int oddCount=0;
	
	scanf("%d",&userInput);

	if(userInput<0) userInput = userInput*(-1);
		
	while(userInput!= 0)
	{
		lastDigit = userInput%10;
		userInput = userInput/10;
		
		if(lastDigit%2 == 0) evenCount++;
		if(lastDigit%2 != 0) oddCount++;
	}
	
	printf("%d %d",evenCount, oddCount);
	
	return 0;
}


