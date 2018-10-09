#include <stdio.h>
#include <stdlib.h>

int main()
{
	int  j, k, max = 0, min = 99999;
	int a[3] = { 0, 0, 0 };


	puts("請輸入三個數:\n");


	scanf_s("%d",&a[0]);
	scanf_s("%d", &a[1]);
	scanf_s("%d", &a[2]);
	

	for (j = 0; j < 3; j++)
	{
		if (max <= a[j])
		max = a[j];
	}

	
	for (k = 0; k < 3; k++)
	{
		if (min >= a[k])
		min = a[k];
	}


	
	printf("最大值為:%d", max);
	puts("\n");
	printf("最小值為:%d", min, "\n");
	puts("\n");

	system("pause");

	return 0;
}