#include <stdio.h>

int main(int argc, char **argv)
{
	double n1, n2, n3;
	//printf("Enter numbers\n");
	scanf("%lf %lf %lf",&n1,&n2,&n3);
	//~ if(-32768<n1+n2+n3>32767){
		//~ printf("Error!");
		//~ return 0;
	//~ }
	double nAverage = (n1+n2+n3)/3;
	
	printf("%.2f",nAverage);

	
	return 0;
}

