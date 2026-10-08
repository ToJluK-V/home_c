#include <stdio.h>

int main(int argc, char **argv)
{
	int userInput;
	int lastDigit;
	int sum = 0;
	int prod = 1; //исключаем умножение на 0 в первой итерации
	
	int temp;
	
	scanf("%d",&userInput);

	if(userInput<0) userInput = userInput*(-1);
	
	for(int i = 11; i<=userInput; i++){
		temp = i;	
	while(temp != 0)
	{
		lastDigit = temp%10;
		temp = temp/10;
		sum += lastDigit;
		prod *= lastDigit; 
	}
	
	if (sum == prod) printf("%d ", i);
	
		sum = 0; //возращаем значения в первичное состояние
		prod = 1;
}
	
	return 0;
}



