#include <stdio.h>

int main(int argc, char **argv)
{
 int a;
 scanf("%d",&a);
 switch(a) {
 case 1 : printf("one\n"); break;
 case 2 : printf("two\n");
 case 3 :
 case 4 : printf("three\n"); break;
 default: printf("default\n");
 }
 
}

