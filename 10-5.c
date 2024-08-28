// 배열을 처리하는 함수
#include <stdio.h>

void print_ary(int* pa);

int main()
{
	int ary[5] = { 10,20,30,40,50 };
	print_ary(ary);

	return 0;
}


void print_ary(int* pa)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", pa[i]);
	}
}

// 배열의 이름과 size를 함수에 전달함으로써 여러개의 배열을 사용할 수도 있다.
// 배열의 size/요소의 size 를 통해서 배열의 요소 개수를 알아낼 수도 있다. 
// 포인터에 size를 하면 전체 배열의 크기가 아니라 포인터자체의 크기가 사용되므로 주의해야한다.