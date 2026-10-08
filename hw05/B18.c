#include <stdio.h>

int main(int argc, char **argv)
{
	int userInput;
	int nextNumber;
	
	int a=0;
	int b=1;

	
	scanf("%d",&userInput);

	if(userInput<0) userInput = userInput*(-1);
	
	for(int i = 0; i < userInput; i++)
	{
		nextNumber = a + b;
		a = b;
		b = nextNumber;
		printf("%d ", a);
	}
	
	
	return 0;
}




