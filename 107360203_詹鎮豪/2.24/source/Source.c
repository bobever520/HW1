#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;

	puts("請輸入一個數，判斷其奇偶");

	scanf_s("%d",&a);


	if (a % 2 == 1)
	 {
		puts("odd");
	 }
	
	else
	 {
		puts("even");
  	 }
	 

	system("pause");
	return 0;

}