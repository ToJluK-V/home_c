#include <stdio.h>

int main(int argc, char **argv)
{
	int userInput;
	
	scanf("%d",&userInput);

	if(userInput<0) userInput = userInput*(-1);
	
	if(userInput == 1) // отдельно обработаем 1
	{
	 printf("%s", "NO");
	 return 0;
	} 
		
	for(int i = 2; i<userInput; i++)
	{
		if (userInput%i == 0 )
		{
		 printf("%s", "NO");
		 return 0;
		}
	}
	printf("%s", "YES");
	return 0;
}



