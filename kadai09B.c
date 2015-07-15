#include <stdio.h>

int main(void)
{
	char m1[20],m2[20];
	
	printf("•¶Žš—ñ‚P“ü—Í-->");
	scanf("%s",m1);
	
	printf("•¶Žš—ñ‚Q“ü—Í-->");
	scanf("%s",m2);
	
	if( strcmp(m1,m2) == 0 ){
		printf("Œ‹‰Ê:“ñ‚Â‚Ì•¶Žš—ñ‚Í“¯‚¶‚Å‚·");
	}
	else{
		printf("Œ‹‰Ê:“ñ‚Â‚Ì•¶Žš—ñ‚Íˆá‚¢‚Ü‚·");
	}
	
	return 0;
}
