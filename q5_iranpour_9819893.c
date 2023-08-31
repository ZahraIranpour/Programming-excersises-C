#include <stdio.h>

int main()
{
	int n, m, f, arr[100][100];
	scanf_s("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf_s("%d", &arr[i][j]);
		}
	}
	scanf_s("%d", &f);
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] == f)
			{
				k++;
			}
		}
	}
	printf("%d", k);
}