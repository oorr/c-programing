#include <stdio.h>

int main(void)
{
	char m1[20],m2[10];
	
	printf("�ϐ�m1����-->");
	scanf("%s",m1);
	
	printf("�ϐ�m2����-->");
	scanf("%s",m2);
	
	printf("����:%s\n",strcat(m1,m2));
	
	return 0;
}