#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char moji[20] = "AB1CDE23FG4",num[20];
	char *mp,*np;
	unsigned int i,j;
	
	mp = moji;
	//printf("•¶Žš—ñ“ü—Í-->");
	//scanf("%s", mp );
	
	np = num;
	i = 0;	
	while( i <= strlen(mp) )
	{
		if ( isdigit( *(mp + i)))
		{
			*(np + j) = *(mp + i);
			j++;
		}
		i++;
	}
	printf("\n”Žš•¶Žš—ñ:%s\n",num );
	
	return 0;
}