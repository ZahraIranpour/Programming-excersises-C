#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct info {
    int id;
    char name[30];
}

safine[30];

int add(struct info* f)
{
    for (int i = 0; i < 30; i++) 
    {
        if (f[i].id == 0) 
        {
            return i; 
        }
    }
    return -99;
}

int del(struct info* f, int id)
{
    for (int i = 0; i < 30; i++) 
    {
        if (f[i].id == id) 
        {
            return i; 
        }
    }
    return -99;
}

int main() {
    int shomare = 0;
    char nom[30], cmd[15], all[70];
    for (int a = 0; a < 30; a++) 
    {
        strcpy(safine[a].name, "\0");
        safine[a].id = 0;
    }
    while (1) 
    {
        shomare = 0;
        strcpy(nom, "\0");
        strcpy(cmd, "\0");
        gets(all);
        sscanf(all, "%s %s %d", cmd, nom, &shomare);

        if (!strcmp(cmd, "exit")) 
        {
            break;
        }
        else if (!strcmp(cmd, "list"))
        {
            for (int b = 0; b < 30; ++b) 
            {
                if (safine[b].id != 0)
                {
                    printf("%d %s\n", safine[b].id, safine[b].name);
                }
            }
        }
        else if (!strcmp(cmd, "del"))
        {
            sscanf(nom, "%d", &shomare);
            if (del(safine, shomare) >= 0) 
            {
                printf("%s deleted\n", safine[del(safine, shomare)].name);
                int n = del(safine, shomare);
                strcpy(safine[n].name, "\0");
                safine[n].id = 0;
            }
            else
            {
                printf("not found\n");
            }
        }

        else if (!strcmp(cmd, "add")) 
        {
            if (add(safine) >= 0) 
            {
                int m = add(safine);
                strcpy(safine[m].name, nom);
                safine[m].id = shomare;
                printf("%s added\n", nom);
            }
            else 
            {
                printf("no room left\n");
            }
        }

        else
        {
            printf("invalid command\n");
        }
    }
    return 0;
}