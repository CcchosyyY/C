// scanf 가 버퍼를 사용하여 입력되는 것을 확인하는 예제
// tiger 를 scanf에서 한번에 쳐서 확인해 볼것
#include <stdio.h>

int main()
{
	char ch;
	int i;

	for (i = 0; i < 3; i++)
	{
		scanf("%c", &ch);
		printf("%c", ch);
	}
	return 0;
}

// 버퍼에 tiger가 들어가고 scanf 가 t, i, g를 각각 알아서 입력을 받음. 버퍼에는 e와r이 남아있음