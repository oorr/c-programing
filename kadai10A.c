#include <stdio.h>

int main(void)
{
	int a = 10, b = 5, g;
	int *pa, *pb;
	
	pa = &a;
	pb = &b;
	g = *pa + *pb;
	
	printf("g:%d\n",g);
	
	return 0;
}