#include <stdio.h>
#include <stdlib.h>

int main()
{
	float km, klm, kll, sc, ac,m,lo;

	puts("�п�J�@��Ѫ��`���{��:\n ");
	scanf_s("%f", &km);

	puts("�T�o�@���ɦh�ֿ� :\n ");
	scanf_s("%f", &klm);

	puts("�����@���ɯ��p�h�֤��� :\n ");
	scanf_s("%f", &kll);

	puts("�@�Ѫ������O :\n ");
	scanf_s("%f", &sc);

	puts("�@�Ѫ��q��O(�L���O):\n ");
	scanf_s("%f", &ac);
	lo = km / kll;
	m = lo*klm;
	m = m + sc + ac;
	printf("�@�Ѧ@�n��O%f����q�O\n", m);



	system("pause");

	return 0;

}