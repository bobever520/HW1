#include <stdio.h>
#include <stdlib.h>

int main()
{
	float km, klm, kll, sc, ac,m,lo;

	puts("請輸入一整天的總里程數:\n ");
	scanf_s("%f", &km);

	puts("汽油一公升多少錢 :\n ");
	scanf_s("%f", &klm);

	puts("平均一公升能行駛多少公里 :\n ");
	scanf_s("%f", &kll);

	puts("一天的停車費 :\n ");
	scanf_s("%f", &sc);

	puts("一天的通行費(過路費):\n ");
	scanf_s("%f", &ac);
	lo = km / kll;
	m = lo*klm;
	m = m + sc + ac;
	printf("一天共要花費%f的交通費\n", m);



	system("pause");

	return 0;

}