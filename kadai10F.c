#include <stdio.h>

int main(void)
{
	int array[8],i,j,min;
	int *arr_p;
	
	arr_p = array;	
	for( i = 0; i < 8; i++)
	{
		printf("����[%d]-->",i);
		scanf("%d", arr_p + i );
	}
	//�\�[�g�n��
	for( i = 0; i < 8; i++)
	{
		min = *(arr_p + i);
		for( j = i + 1; j < 8; j++)
		{
			if( min > *(arr_p + j) )
			{
				min = *(arr_p + j);
				*(arr_p + j) = *(arr_p + i);
				*(arr_p + i) = min;
			}
		}
	}
	//�\�[�g�I���
	
	printf("\n\n**�\�[�g��**\n");
	for( i = 0; i < 8; i++ )
	{
		printf("����[%d]:%d\n",i,*(arr_p + i));
	}
	
	return 0;
}