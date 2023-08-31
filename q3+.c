#include <stdio.h>
#include <string.h>

int N;
void compareAlpha(char p[N][30]);
void Swap(char *p1, char *p2);
void print2DArray(char p[N][30]);
void compareSlen(char p[N][30]);
int compareCharacters(char a,char b);
int main( )
{

    scanf("%d", &N);
    char Str[N][30];
    for (int i = 0; i < N; i++) {
            scanf("%s",(*(Str + i)));
        }
    compareAlpha(Str);
    compareSlen(Str);
    print2DArray(Str);
    return 0;
}
void compareAlpha(char Str[N][30]) {
    for (int k = 0; k < N; ++k) {
        for (int i = 0; i < N - 1; ++i) {
            if (strcmp((*(Str + i)), (*(Str + i + 1))) > 0) {
                Swap((*(Str + i)), (*(Str + i + 1)));
            }
        }
    }
}
void Swap(char *p1, char *p2)
{
    char Temp[30];
    strcpy(Temp, p2);
    strcpy( p2, p1);
    strcpy(p1, Temp);
}
void print2DArray(char p[N][30])
{
    for (int i = 0; i < N; i++) {
        printf("%s\n", (*(p + i)));
    }
}
void compareSlen(char Str[N][30]) {
    int j = 0;
    for (int k = 0; k < N; ++k) {
        for (int i = 0; i < N - 1; ++i) {
            if (compareCharacters(*(*(Str + i) + j), *(*(Str + i + 1) + j)) == 0) {
                if (strlen((*(Str + i))) > strlen((*(Str + i + 1)))) {
                    Swap((*(Str + i)), (*(Str + i + 1)));
                }
            }
        }
    }
}
int compareCharacters(char a,char b){
    if(a == b) return 0;
    else return 1;
}