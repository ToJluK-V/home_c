#include <stdio.h>

int main(int argc, char **argv)
{
	int n1, n2, n3;
	//printf("Enter numbers\n");
	scanf("%d %d %d",&n1,&n2,&n3);
	//~ if(-32768<n1+n2+n3>32767){
		//~ printf("Error!");
		//~ return 0;
	//~ }
	printf("%d+%d+%d=%d",n1,n2,n3,n1+n2+n3);
	
	return 0;
}

