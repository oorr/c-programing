#include <stdio.h>
#include <string.h>

int main(void)
{
	unsigned int i;
	char str[50],seastr[50];
	
	printf("•¶Žš—ñ“ü—Í-->");
	scanf("%s",str);
	fflush(stdin);
	
	printf("ŒŸõ•¶Žš—ñ“ü—Í-->");
	scanf("%s",seastr);
	
	printf("\n");
	for( i = 0; i < strlen(str); i++)
	{			
		if( strncmp( &str[i], seastr, strlen(seastr) ) == 0 )
			printf("ˆê’vêŠ:%d\n",i);
	}
		
	return 0;
}
	