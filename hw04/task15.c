#include <stdio.h>

int main(int argc, char **argv)
{
	float x1, y1, x2, y2;
	float k, b;
	//printf("Enter numbers\n");
	scanf("%f %f %f %f",&x1,&y1,&x2,&y2);

	k = (y1-y2)/(x1-x2);
	b = y1-k*x1;
		
	printf( "%.2f %.2f",k,b);
	
	return 0;
}

