#include <stdio.h>
#include <string.h>

int main(void)
{
	unsigned int i;
	char str[50],seastr[50];
	
	printf("���������-->");
	scanf("%s",str);
	fflush(stdin);
	
	printf("�������������-->");
	scanf("%s",seastr);
	
	printf("\n");
	for( i = 0; i < strlen(str); i++)
	{			
		if( strncmp( &str[i], seastr, strlen(seastr) ) == 0 )
			printf("��v�ꏊ:%d\n",i);
	}
		
	return 0;
}
	