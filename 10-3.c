//�����Ͱ� ���� �����μ��� Ư¡�� Ȱ���ϴ� ��

#include <stdio.h>

int main(void)
{
	int ary[3] = { 10,20,30 };
	int* pa = ary;
	int i;

	printf("�迭�� �� : ");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *pa);
		pa++;
	}

	return 0;
}

//pa�� int �迭�� �������̹Ƿ� +1�� �ϸ� ���� �迭�� ��Ҹ� ����Ű�� �ȴ�.
// ary�� �ּ�(���)�̹Ƿ� ary++�� �� �� ����.