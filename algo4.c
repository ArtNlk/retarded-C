#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <malloc.h>

int main()
{
    setlocale(LC_ALL,"ru");
    int n =0;
    int l = -1;
    char** name;
    char* ctrl;
    char temp[255];

    printf("Number of numbers\n");
    scanf("%d",&n);

    name = calloc(n,sizeof(char*));

    printf("Enter list\n");

    for(int i = 0; i < n; i++)
    {
        scanf("%s",temp);
        name[i] = calloc(strlen(temp)+1,sizeof(char));
        strcpy(name[i],temp);
    }

    printf("Enter to find\n");
    scanf("%s", temp);
    ctrl = calloc(strlen(temp)+1,sizeof(char));
    strcpy(ctrl,temp);

    int k = 0;
    while((l==-1)&&(k<n))
    {
        if(strcmp(name[k],ctrl) == 0)
        {
            l = k;
        }
        k++;
    }

    printf("Found at index %d\n",l);
    for(int i = 0; i < n; i++)
    {
        free(name[i]);
    }
    free(name);
    free(ctrl);
}
