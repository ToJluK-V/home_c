#include <stdio.h>

int main(int argc, char **argv)
{
	int n1, n2, n3, n4, n5, min;

	scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
	//printf("%d-%d=%d",n1,n2,n1-n2);
	min=n1<n2?n1:n2;
	min=min<n3?min:n3;
	min=min<n4?min:n4;
	min=min<n5?min:n5;
	printf("%d", min);
	
	return 0;
}
