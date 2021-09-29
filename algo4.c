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

    printf("Введи число строк\n");
    scanf("%d",&n);

    name = calloc(n,sizeof(char*));

    printf("Введи список\n");

    for(int i = 0; i < n; i++)
    {
        scanf("%s",temp);
        name[i] = calloc(strlen(temp)+1,sizeof(char));
        strcpy(name[i],temp);
    }

    printf("Введи искомое\n");
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

    printf("Искомое найдено по индексу %d\n",l);
    for(int i = 0; i < n; i++)
    {
        free(name[i]);
    }
    free(name);
    free(ctrl);
}
