// �迭�� ó���ϴ� �Լ�
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

// �迭�� �̸��� size�� �Լ��� ���������ν� �������� �迭�� ����� ���� �ִ�.
// �迭�� size/����� size �� ���ؼ� �迭�� ��� ������ �˾Ƴ� ���� �ִ�. 
// �����Ϳ� size�� �ϸ� ��ü �迭�� ũ�Ⱑ �ƴ϶� ��������ü�� ũ�Ⱑ ���ǹǷ� �����ؾ��Ѵ�.