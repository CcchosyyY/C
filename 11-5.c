// 입력문자의 아스키 코드 값을 출력하는 프로그램
// ctrl+z 를 만나기 전까지 계속 실행을 하게된다. cz enter 하고 cz enter 를 한 번 더 해야 종료할 수 있다.
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