#include <stdio.h>

int main(int argc, char **argv)
{
	int n1, n2, n3, n4, n5, max;

	scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
	//printf("%d-%d=%d",n1,n2,n1-n2);
	max=n1>n2?n1:n2;
	max=max>n3?max:n3;
	max=max>n4?max:n4;
	max=max>n5?max:n5;
	printf("%d", max);
	
	return 0;
}
