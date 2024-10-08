#include <stdio.h>

void input_ary(double* pa, int size);
double find_max(double* pa, int size);

int main()
{
	double ary[5];
	double max;
	int size = sizeof(ary) / sizeof(ary[0]);

	input_ary(ary, size);
	max = find_max(ary, size);
	printf("배열의 최댓값 :%.1lf ", max);

	return 0;
}

void input_ary(double* pa, int size)
{
	printf("%d개의 실수 입력", size);
	for (int i = 0; i < size; i++)
	{
		scanf("%lf", &pa[i]);   //pa+i도 가능
	}
}

double find_max(double* pa, int size)
{
	double max = *pa;
	for (int i = 0; i < size; i++)
	{
		if (max < pa[i])
			max = pa[i];
	}

	return max;
}
