#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int i,cnt1,cnt2;
	char str[30];
	
	printf("���������-->");
	scanf("%s",str);
	
	i = cnt1 = cnt2 = 0;
	while( str[i] != '\0' )
	{
		if( isdigit(str[i]) ){
			cnt1++;
		}
		else{
			cnt2++;
		}
		i++;
	}
		
	printf("\n����:%d",cnt1);
	printf("\n���̑�:%d\n",cnt2);
	
	return 0;
}