#include <stdio.h>

int main(void)
{
	char ch;
	int in;
	double db;

	char* pc = &ch;
	int* pi = &in;
	double* pd = &db;

	printf("char형 변수의 주소 크기 : %d \n", sizeof(&ch));
	printf("int형 변수의 주소 크기 : %d \n", sizeof(&in));
	printf("double형 변수의 주소 크기 : %d \n", sizeof(&db));

	printf("char * 포인터의 크기: ")


}