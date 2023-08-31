#include <stdio.h>
#include <stdlib.h>

int main() 
{ 
    char fname[100];
    int wordNumber = 1;
    char c;
    printf("What is the file name: ");
 scanf("%s",fname);
 FILE *file;    
    file = fopen(fname,"r");
    if(file == '\0')
    {
       printf("\nFile does not exist or can not be opened");
    }
    else 
    { 
        c = fgetc(file); 
        while (c != EOF) 
        { 
            if(c == ' '|| c == '\n')
            {
             wordNumber++;
            }
            c = fgetc(file); 
     }
        printf("%d",wordNumber); 
    } 
}