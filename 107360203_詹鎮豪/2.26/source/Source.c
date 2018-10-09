#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;

	puts("块ㄢ计耞材计琌材计计\n");

	scanf_s("%d%d", &a, &b);

	puts("\n");
	if (a%b == 0)
	{
		printf("%d%d计", b, a);
		puts("\n");
	}
	else
	{
		printf("%dぃ%d计", b, a);
		puts("\n");
	}


	system("pause");
	return 0;

}