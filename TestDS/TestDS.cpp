// TestDS.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


void f(int * p)
{
	*p = 100;
}

void fv(int p)
{
	p = 100;
}

//int main()
//{
//	int i = 10;
//	int j = 2;
//	f(&i);
//	fv(j);
//	printf("j=%d\n", j);
//	printf("i=%d\n", i);
//	return 0;
//}
