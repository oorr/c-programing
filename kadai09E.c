#include <stdio.h>
#include <string.h>

int main(void)
{
	unsigned int i;
	char str[50],seastr[50];
	
	printf("文字列入力-->");
	scanf("%s",str);
	fflush(stdin);
	
	printf("検索文字列入力-->");
	scanf("%s",seastr);
	
	printf("\n");
	for( i = 0; i < strlen(str); i++)
	{			
		if( strncmp( &str[i], seastr, strlen(seastr) ) == 0 )
			printf("一致場所:%d\n",i);
	}
		
	return 0;
}
	