#include <stdio.h>

int main(void)
{
	char m1[20],m2[20];
	
	printf("文字列１入力-->");
	scanf("%s",m1);
	
	printf("文字列２入力-->");
	scanf("%s",m2);
	
	if( strcmp(m1,m2) == 0 ){
		printf("結果:二つの文字列は同じです");
	}
	else{
		printf("結果:二つの文字列は違います");
	}
	
	return 0;
}
