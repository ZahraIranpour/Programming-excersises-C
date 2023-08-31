#include <stdio.h>

int main()
{
	FILE* fp;
	int kjnhl;
	fp = fopen("test.txt", "w+");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &kjnhl);
		fprintf(fp, "%d \n", kjnhl);
	}
	fclose(fp);
}