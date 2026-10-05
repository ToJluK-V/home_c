#include <stdio.h>

int main(int argc, char **argv)
{
	int n;

	scanf("%d",&n);
	
	if(n<0 && n>12) printf("%s","Error");
	if(n==1 || n==2 || n == 12) printf("%s","winter");
	if(n==3 || n==4 || n == 5) printf("%s","spring");
	if(n==6 || n==7 || n == 8) printf("%s","summer");
	if(n==9 || n==10 || n == 11) printf("%s","autumn");
	
	return 0;
}

