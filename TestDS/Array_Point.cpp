
#include "stdafx.h"
#include<stdio.h>"
#include<stdlib.h>

int main()
{
	int a[5] = {1,2,3,4,5};//数组的变量名等于数组第一个元素的指针;
	a[3] = *(a + 3);
	printf("%p\n", a);
	printf("%p\n", a+1);
	printf("%p\n", a+2);
	system("pause");
	return 0;
}