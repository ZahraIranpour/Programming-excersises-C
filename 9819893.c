#include <stdio.h>

int main()
{
    int n, n1, k;
    int tartib;

    tartib = 1;
    //baraye(k == n) hamin 1 baghi mimanad

    scanf_s("%d %d", &k, &n);

    if (k < n)
    {
        for (n1 = n; n1 > (n - k); n1 = n1 - 1)
        {
            tartib = n1 * tartib;
        }
    }
    else if (k > n)
    {
        tartib = 0;
    }

    printf("%d", tartib);

}