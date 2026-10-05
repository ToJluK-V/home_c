#include <stdio.h>

int main(int argc, char **argv)
{
	int n1, n2, n3;

	scanf("%d %d %d",&n1,&n2,&n3);
	
	if(n3>n2 && n2>n1) printf("%s","YES");
	else printf("%s","NO");
	
	return 0;
}
