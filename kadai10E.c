#include <stdio.h>

int main(void)
{
	int array[10],goukei,i,cnt;
	int *pa;
	double heikin;
	
	goukei = 0;
	pa = array;
	for( i = 0; i < 10; i++ )
	{
		printf("®”“ü—Í[%d]-->",i);
		scanf("%d",pa + i );
		goukei = goukei + *(pa + i);
	}
	
	heikin = (double)goukei / i;
	printf("\n•½‹Ï:%.1f\n",heikin);
	cnt = 0;
	
	for( i = 0; i < 10; i++)
	{
		if( *(pa + i) < heikin )
		{
			printf("Œ‹‰Ê[%d]:%d\n",i,*(pa + i));
			cnt = cnt + 1;
		}
	}
	printf("Œ”:%d\n",cnt);
	
	return 0;
}