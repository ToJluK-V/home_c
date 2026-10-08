#include <stdio.h>

int main(int argc, char **argv)
{
	int userInput;
	int numberCount=0;
	
	while(scanf("%d",&userInput)==1)
	{
		if(userInput == 0) break;
		numberCount++;
	}
	
	printf("%d",numberCount);
	
	return 0;
}



