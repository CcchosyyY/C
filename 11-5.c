// �Է¹����� �ƽ�Ű �ڵ� ���� ����ϴ� ���α׷�
// ctrl+z �� ������ ������ ��� ������ �ϰԵȴ�. cz enter �ϰ� cz enter �� �� �� �� �ؾ� ������ �� �ִ�.
#include <stdio.h>

int main()
{
	int res;
	char ch;

	while (1)
	{
		res = scanf("%c", &ch);
		if (res == -1) break;
		printf("%d ", ch);
	}

	return 0;
}