#include <stdio.h>

int main(int argc, char **argv)
{
	int userInput;

	scanf("%d",&userInput);

	if(userInput<0){
		printf("Wrong number");
		return 0;
	}
	if(userInput/100!=0 && userInput/1000==0) printf("%s","YES");
	else printf("%s","NO");
	
	//printf("%d %d %d %d", userInput/1, userInput/10, userInput/100, userInput/1000);
	
	return 0;
}

