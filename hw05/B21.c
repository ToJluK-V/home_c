#include <stdio.h>

int main(int argc, char **argv)
{
	char userInput;
	//у строчной буквы всегда включен 5ый бит. включаем его с помощью побитового ИЛИ (01010001 -> 01110001)
	//пробел (код 32) | 32 так и останется пробелом
	while(scanf("%c",&userInput)==1)
	{
		if(userInput == '.') break;
		printf("%c", userInput | 32);
	} 
	return 0;
}



