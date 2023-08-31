#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main()
{
    int num, arr[10], sum;
    FILE* fptr;
    fptr = fopen("test.txt", "r");
    for (int i = 0; i < 10; i++)
    {
        fscanf(fptr, "%d", &num);
        arr[i] = num;
    }
    qsort(arr, 10, sizeof(int), cmpfunc);
    for (int i = 0; i < 10; i++)
    {
        sum += arr[i];
    }
    printf("%s%d\n", "sum : ", sum);
    printf("%s%d\n", "avg : ", (sum / 10));
    printf("%s%d\n", "max : ", arr[9]);
    printf("%s%d\n", "min : ", arr[0]);
    fclose(fptr);
    return 0;
}
