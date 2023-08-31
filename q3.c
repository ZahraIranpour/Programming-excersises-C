#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    scanf("%d", &size);
    int* allocated;
    allocated = (int*)malloc(size * sizeof(int));
    if (allocated != NULL)
    {
        *allocated = 1;
        *(allocated + 1) = 1;
        for (int i = 2; i < size; ++i)
        {
            *(allocated + i) = *(allocated + (i - 1)) + *(allocated + (i - 2));
        }
        for (int i = 0; i < size; ++i)
        {
            printf("%d ", *(allocated + i));
        }
        printf("\n");
    }
    else
    {
        printf("Memory Not Allocated");
        return -1;
    }
    scanf("%d", &size);
    allocated = realloc(allocated, size * sizeof(int));
    if (allocated != NULL)
    {
        *allocated = 1;
        *(allocated + 1) = 1;
        for (int i = 2; i < size; ++i) {
            *(allocated + i) = *(allocated + (i - 1)) + *(allocated + (i - 2));
        }
        for (int i = 0; i < size; ++i) {
            printf("%d ", *(allocated + i));
        }
        free(allocated);
    }
    else
    {
        printf("Memory Not Allocated");
        return -1;
    }
    return 0;
}