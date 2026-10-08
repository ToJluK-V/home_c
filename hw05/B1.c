#include <stdio.h>

int main(int argc, char **argv)
{
	int userInput;

	scanf("%d",&userInput);
	if(userInput<1 || userInput>100){
		printf("Wrong number");
		return 0;
	}
	
	for(int i=1; i<=userInput; i++) printf("%d %d %d\n", i, i*i, i*i*i);
	
	return 0;
}

