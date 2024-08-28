// 포인터의 연산 알아보기
#include <stdio.h>

int main(void)
{
	int ary[5] = { 10,20,30,40,50 };
	int* pa = ary;
	int* pb = pa + 3;
	printf("pa : %u\n", pa);
	printf("pb : %u\n", pb);

	pa++;
	printf("pb-pa :%u\n", pb - pa);

	printf("앞에 있는 배열 요소의 값 출력:");
	if (pa < pb)printf("%d", *pa);
	else printf("%d", *pb);

	return 0;
}

// 값으로 2가 나오는데 이 결과는 2칸의 차이가 난다는 것을 나타낸다.