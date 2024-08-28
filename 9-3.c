#include <stdio.h>

int main()
{
	int a = 10, b = 15, total;
	double avg;
	int* pa, * pb;
	int* pt = &total;
	double* pg = &avg;

	pa = &a;
	pb = &b;

	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("a, b = %d, %d\n", *pa, *pb);
	printf("a,b¿« ∆Ú±’ = %.2lf\n", *pg);

	return 0;
}