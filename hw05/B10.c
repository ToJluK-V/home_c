#include <stdio.h>

int main(int argc, char **argv)
{
	int userInput;
	int lastDigit;

	scanf("%d",&userInput);
	
	if(userInput==0){			//? обработка 0
			printf("%s","YES");
			return 0;
		}

	if(userInput<0) userInput = userInput*(-1);
	
	while(userInput!=0)
	{
		lastDigit = userInput%10;
		userInput = userInput/10;
		
		if(lastDigit <= userInput%10) break; 
		
		if(userInput==0){			//если были проверены все цифры и предыдущая оказалась меньше последующей, то 
			printf("%s","YES");
			return 0;
		}

	}
	
	printf("%s","NO");
		
	return 0;
}
