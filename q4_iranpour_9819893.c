#include <stdio.h>
#include <stdlib.h>

int main() 
{ 
    char fname[100], fname2[100];
    char c;
    printf("What is the file name: ");
 scanf("%s",fname);
 printf("What is the file name you want to copy in: ");
 scanf("%s",fname2);
 FILE *file;
 FILE *file2;
    file = fopen(fname,"r");
    file2 = fopen(fname2,"w");
    if(file == '\0')
    {
       printf("\nFile does not exist or can not be opened");
    }
    else 
    {
        c = fgetc(file); 
        while (c != EOF) 
        { 
            c = fgetc(file);
            fprintf(file2, "%c", c);
     }
    } 
}