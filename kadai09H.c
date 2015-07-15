#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
	unsigned int i,j,cnt;
	char m1[50] = "AAAAAAABBBCddEEEE#####",m2[50];
	
	//printf("ì¸óÕï∂éöóÒ(m1)-->");
	//scanf("%s",m1);
	
	i = j = 0;
	while( m1[i] != '\0' )
	{
		cnt = 1;
		if( m1[i] == m1[i+1] )
		{
			while( m1[i] == m1[i+1] )
			{
				i++;
				cnt++;
			}
			sprintf(&m2[j],"%c%d%c",'@',cnt,m1[i++]);
			j += 3;
		}
		else
		{
			sprintf(&m2[j++],"%c",m1[i++]);
		}
	}
	
	printf("%s",m2);
	
	printf("\n\nà≥èkî‰:%.1f%\n", ((double) strlen(m2)/ strlen(m1) ) * 100 );

	return 0;
}