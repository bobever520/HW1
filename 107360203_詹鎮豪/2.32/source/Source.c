#include <stdio.h>
#include <stdlib.h>

int main()
{
	float high, kg,bmi;


	puts("�п�J�������魫:\n");
	scanf_s("%f%f", &high, &kg);

	if (high > 3)
		high = high / 100;

	high = high*high;
	bmi = kg / high;

	printf("�z��BMI��%f\n", bmi);

	if (bmi <= 18.5)
		puts("���L��");
	else if (bmi <= 24.9)
		puts("���A��");
	else if (bmi <= 29.9)
		puts("���L��");
	else
		puts("�L��έD");

	system("pause");

	return 0;
}