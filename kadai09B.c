#include <stdio.h>

int main(void)
{
	char m1[20],m2[20];
	
	printf("������P����-->");
	scanf("%s",m1);
	
	printf("������Q����-->");
	scanf("%s",m2);
	
	if( strcmp(m1,m2) == 0 ){
		printf("����:��̕�����͓����ł�");
	}
	else{
		printf("����:��̕�����͈Ⴂ�܂�");
	}
	
	return 0;
}
