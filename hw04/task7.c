#include <stdio.h>

int main(int argc, char **argv)
{
	int n1, n2;

	scanf("%d %d",&n1,&n2);
	//printf("%d-%d=%d",n1,n2,n1-n2);
	n1<n2?printf("%d %d",n1,n2):printf("%d %d",n2,n1);
	
	return 0;
}
