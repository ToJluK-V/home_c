#include <stdio.h>

int main(int argc, char **argv)
{
	int userInput;
	int lastDigit = -1; //чтобы не было совпадений при первом сравнении
	//char flag = 0;

	scanf("%d",&userInput);

	if(userInput<0) userInput = userInput*(-1);
	
	while(userInput!=0)
	{
		if(lastDigit == userInput%10)
		{
			printf("%s","YES");
			return 0;
		}
		lastDigit = userInput%10;
		userInput = userInput/10;
	}
	
	printf("%s","NO");
		
	return 0;
}
