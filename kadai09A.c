#include <stdio.h>

int main(void)
{
	char m1[20],m2[10];
	
	printf("変数m1入力-->");
	scanf("%s",m1);
	
	printf("変数m2入力-->");
	scanf("%s",m2);
	
	printf("結果:%s\n",strcat(m1,m2));
	
	return 0;
}