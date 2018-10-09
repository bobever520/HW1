#include <stdio.h>
#include <stdlib.h>

int main()
{
	float high, kg,bmi;


	puts("請輸入身高及體重:\n");
	scanf_s("%f%f", &high, &kg);

	if (high > 3)
		high = high / 100;

	high = high*high;
	bmi = kg / high;

	printf("您的BMI為%f\n", bmi);

	if (bmi <= 18.5)
		puts("體位過輕");
	else if (bmi <= 24.9)
		puts("體位適中");
	else if (bmi <= 29.9)
		puts("體位過重");
	else
		puts("過於肥胖");

	system("pause");

	return 0;
}