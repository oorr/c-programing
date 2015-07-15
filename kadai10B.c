#include <stdio.h>

int main(void)
{
	char moji[] = "ABCD";
	char *mp;
	int i = 0;
	
	mp = moji;
	
	for( i = 0; i < 4; i++)
	{
		printf("%c\n", *mp + i );
	}

		
	return 0;
}