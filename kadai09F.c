#include <stdio.h>
#include <string.h>

int main(void)
{
	int i,j;
	char m1[50],m2[50];
	
	printf("•¶Žš—ñ“ü—Í(m1)-->");
	scanf("%s",m1);
	
	printf("íœ•¶Žš—ñ(m2)-->");
	scanf("%s",m2);
	
	i = 0;
	while( m1[i] != '\0' )
	{
		if( strncmp( &m1[i], m2, strlen(m2) ) == 0 )
		{
			for( j = 0; j < strlen(m1) - i; j++)
			{
				m1[i+j] = m1[i+j+strlen(m2)];
			}
			continue;
		}
		i++;
	}
	
	printf("Œ‹‰Ê•¶Žš—ñ(m1):%s\n",m1);
	return 0;
}
