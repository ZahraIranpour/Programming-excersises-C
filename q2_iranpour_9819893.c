#include <stdio.h>


int main()
{
    int arr[100], n, arrf = 0, ie = 0, je = 0, pa = 0;
    for (int i = 0; i < 100; i++)
    {
        scanf_s("%d", (arr + i));
        if (*(arr + i) == 0)
        {
            break;
        }
        arrf++;
    }

    scanf_s("%d", &n);
    for (int i = 0; i < arrf; i++)
    {
        for (int j = i; j < arrf; j++)
        {
            if (*(arr + i) + *(arr + j) == n)
            {
                if (pa == 0)
                {
                    printf("%d %d", *(arr + i), *(arr + j));
                    printf("\n");
                }
            }
            je++;
        }
        ie++;
    }
}