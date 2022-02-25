#include <stdio.h>

using namespace std;

int main()
{
	int N = 0;
	scanf("%d", &N);

	int index = 10'000;
	int deque[20'000] = {};
	int pop = 10'001;

	for (int i = 0; i < N; ++i)
	{
		char s[20] = {};
		scanf("%s", &s);

		switch (s[0])
		{
		case 'p':
			if (s[1] == 'u')//Ǫ��
			{
				int x = 0;
				if (s[5] == 'f')//����Ʈ
				{
					scanf("%d", &x);
					deque[--pop] = x;
				}
				else//��
				{
					scanf("%d", &x);
					deque[++index] = x;
				}
			}
			else//��
			{
				if (pop > index)
				{
					printf("-1\n");
				}
				else
				{
					if (s[4] == 'f')//����Ʈ
					{
						printf("%d\n", deque[pop++]);
					}
					else//��
					{
						printf("%d\n", deque[index--]);
					}
				}
			}
			break;
		case 's':
			printf("%d\n", (index - pop) + 1);
			break;
		case 'e':
			if (pop > index)
				printf("1\n");
			else
				printf("0\n");
			break;
		case 'f':
			if (pop > index)
				printf("-1\n");
			else
				printf("%d\n", deque[pop]);
			break;
		case 'b':
			if (pop > index)
				printf("-1\n");
			else
				printf("%d\n", deque[index]);
			break;
		}

	}



}
