#include <stdio.h>

int main(int argc, char **argv)
{
	int n1, n2;

	scanf("%d %d",&n1,&n2);
	
	if(n1>n2) printf("%s","Above");
	if(n1<n2) printf("%s","Less");
	if(n1==n2) printf("%s","Equal");
	
	return 0;
}

