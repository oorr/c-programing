#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int i,j,k;
	char str[30],s1str[30],s2str[30];
	
	printf("���������-->");
	scanf("%s",str);
	
	i = j = k =0;
	while( str[i] != '\0' )
	{
		if( isalpha(str[i]) ){
			s1str[j++] = str[i];
		}
		else{
			s2str[k++] = str[i];
		}
		i++;
	}
	
	s1str[j] = s2str[k] = '\0';
	
	printf("\n�p��:%s\n",s1str);
	printf("���̑�:%s\n",s2str);
	
	return 0;
}