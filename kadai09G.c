#include <stdio.h>
#include <string.h>

int main(void)
{
	int i,j;
	char m1[50]="ABCBCABCCBAABC",m2[50]="ABC",m3[50]="DEFG";

	//printf("�ҏW�p������(m1)-->");
	//scanf("%s",m1);
	
	//printf("�Ώە�����(m2)-->");
	//scanf("%s",m2);
	
	//printf("�u��������(m3)-->");
	//scanf("%s",m3);
	
	for( i = strlen(m1); i >= 0; i--)
	{
		if( strncmp( &m1[i], m2, strlen(m2)) == 0 )
		{
			for( j = strlen(m1); j >= i; j--)
			{
				m1[j + strlen(m3)-strlen(m2)] = m1[j];
				printf("i:%3d j:%3d moji:%s\n",i,j,m1);
			}
			strncpy( &m1[i],m3,strlen(m3) );
		}
	}
	
	printf("�ҏW��(m1):%s\n",m1);
	
	return 0;
}