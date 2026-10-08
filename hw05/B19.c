#include <stdio.h>

int main(int argc, char **argv)
{
	int userInput;
	int lastDigit;
	
	int sum = 0;
	
	scanf("%d",&userInput);

	if(userInput<0) userInput = userInput*(-1);
		
	while(userInput!= 0)
	{
		lastDigit = userInput%10;
		userInput = userInput/10;
		
		sum = sum + lastDigit;
		
	}
	if(sum == 10) printf("%s", "YES");
	else printf("%s", "NO");
	
	return 0;
}


