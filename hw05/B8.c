#include <stdio.h>

int main(int argc, char **argv)
{
	int userInput;
	int flag = 0; 

	scanf("%d",&userInput);

	if(userInput<0) userInput = userInput*(-1);
	
	while(userInput!=0)
	{
		if(userInput%10 == 9)
		{
			flag++;
		}
		userInput = userInput/10;
	}
	if(flag==1) printf("%s","YES");
	else printf("%s","NO");
		
	return 0;
}
