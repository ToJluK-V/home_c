#include <stdio.h>

int main(int argc, char **argv)
{
	short int i;
	//printf("Input *** number\n");
	scanf("%hd",&i);
	if(i<=99||i>999){
		printf("Wrong number");
		return 0;
	}
	short int ed = (i%10);
	short int des = (i/10)%10;
	short int sot =(i/100);
	//short int sum = ed+des+sot;
	printf("%hd", ed*des*sot);
	
	return 0;
}

