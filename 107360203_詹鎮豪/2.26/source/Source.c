#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;

	puts("��J��ơA�P�_�ĤG�ӼƬO�_���Ĥ@�Ӽƪ��]��\n");

	scanf_s("%d%d", &a, &b);

	puts("\n");
	if (a%b == 0)
	{
		printf("%d��%d���]��", b, a);
		puts("\n");
	}
	else
	{
		printf("%d����%d���]��", b, a);
		puts("\n");
	}


	system("pause");
	return 0;

}