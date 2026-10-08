#include <stdio.h>

int main(int argc, char **argv)
{
	int userInput;
	int evenCount=0;
	
	while(scanf("%d",&userInput)==1)
	{
		if(userInput == 0) break;
		if(userInput%2 == 0) evenCount++;

	}
	
	printf("%d",evenCount);
	
	return 0;
}




