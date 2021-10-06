#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"ru");
    char **name,**best;
    int n,k,len = 0;
    char* temp;


    printf("Введи количество чисел");
    scanf("%d",&n);

    name = calloc(n,sizeof(char*));
    best = calloc(n,sizeof(char*));
    temp = calloc(200,sizeof(char));
    printf("Введи строки");
    for(int i = 0; i < n; i++)
    {
        scanf("%s",temp);
        len = strlen(temp)+1;
        name[i] = calloc(len,sizeof(char));
        strcpy(name[i],temp);
    }

    k = 0;

    for(int i = 0; i < n; i++)
    {
        if((name[i][0]) == 'F')
        {
            best[k] = calloc(strlen(name[i]),sizeof(char));
            strcpy(best[k],name[i]);
            k++;
        }
    }

    printf("Подходящие варианты:\n");

    for(int i = 0; i < k; i++)
    {
        printf("%s\n",best[i]);
    }

    for(int i = 0; i < n; i++)
    {
        free(best[i]);
        free(name[i]);
    }

    free(best);
    free(name);
    free(temp);

    return 0;
}
