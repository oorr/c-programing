#include <stdio.h>

int main(void)
{
	char m1[20],m2[10];
	
	printf("•Ï”m1“ü—Í-->");
	scanf("%s",m1);
	
	printf("•Ï”m2“ü—Í-->");
	scanf("%s",m2);
	
	printf("Œ‹‰Ê:%s\n",strcat(m1,m2));
	
	return 0;
}