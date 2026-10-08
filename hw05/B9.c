#include <stdio.h>

int main(int argc, char **argv)
{
	int userInput;

	scanf("%d",&userInput);

	if(userInput<0) userInput = userInput*(-1);
	
	while((userInput%10)%2 == 0)
	{
		userInput = userInput/10;
		
		if(userInput==0)
		{
			 printf("%s","YES");
			 return 0;
		}
	}
	
	printf("%s","NO");
	return 0;
}

