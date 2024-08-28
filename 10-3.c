//포인터가 지닌 변수로서의 특징을 활용하는 예

#include <stdio.h>

int main(void)
{
	int ary[3] = { 10,20,30 };
	int* pa = ary;
	int i;

	printf("배열의 값 : ");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *pa);
		pa++;
	}

	return 0;
}

//pa는 int 배열의 포인터이므로 +1을 하면 다음 배열의 요소를 가르키게 된다.
// ary는 주소(상수)이므로 ary++를 할 수 없다.