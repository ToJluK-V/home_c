#include <stdio.h>

void swapNumbers(int a, int b); //меняем числа местами

int main(int argc, char **argv)
{
	int userInput_a;
	int userInput_b;
	
	int rem = 1;
	
	scanf("%d %d",&userInput_a, &userInput_b);

	if (userInput_a< userInput_b) swapNumbers(userInput_a, userInput_b);
	
	while(rem!=0)//алгоритм Евклида
	{
	rem = userInput_a%userInput_b;
	userInput_a = userInput_b;
	userInput_b = rem;
	}
		
	
	printf("%d",userInput_a);
	
	return 0;
}

void swapNumbers(int a, int b)
{
	a = a + b;
	b = a - b;
	a = a - b;	
}

