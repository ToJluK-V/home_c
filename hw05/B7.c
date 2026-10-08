#include <stdio.h>

int main(int argc, char **argv)
{
	int userInput;
	
	int userInputCopy; 
	int temp;

	scanf("%d",&userInput);

	if(userInput<0) userInput = userInput*(-1);
	
	while(userInput!=0)
	{	
		userInputCopy = userInput;
		temp = userInputCopy%10; //цифра, которую мы будем сверять со всеми остальными
		
		while(userInputCopy!=0) //пока не переберем все цифры в числе
		{
			userInputCopy = userInputCopy/10;
			if(temp == userInputCopy%10)//есть совпадение?
			{ 
				printf("%s","YES");
				return 0;
			} 
		}
		
		userInput = userInput/10; // проверяем следующую цифру
	}
	
	printf("%s","NO"); //в случае, если нет ни одного совпадения
		
	return 0;
}
