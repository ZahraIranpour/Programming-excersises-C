#include <stdio.h>

int main()
{
    float average = 0, x = 0, sum = 0;
    int n = 0;
    scanf("%d", &n);
    while (!n == 0)
    {
        x++;
        sum += n % 10;
        n /= 10;
    }
    average = sum / x;
    printf("%.3f \n", average);
}
