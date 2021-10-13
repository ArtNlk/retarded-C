#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"ru");
    int j = 0;
    int l = 0;
    int n = 0;
    int k = 0;
    char** name;
    char** list;
    int* sum;
    int* ch;
    char tmp[200];

    printf("Введи n:\n");
    scanf("%d",&n);
    name = calloc(n,sizeof(char*));
    list = calloc(n,sizeof(char*));
    sum = calloc(n,sizeof(int));
    ch = calloc(n,sizeof(int));

    printf("Введи список: \n");
    for(int i = 0; i < n; i++)
    {
        printf("Введи название: \n");
        scanf("%s",tmp);
        name[i] = calloc(strlen(tmp)+1,sizeof(char));
        strcpy(name[i],tmp);
        printf("Введи характеристику: \n");
        scanf("%d",&ch[i]);
    }

    k = 0;

    for(int i =0; i < n; i++)
    {
        l = -1;
        j = 0;
        while((l==-1)&&(j<k))
        {
            if(strcmp(name[i],list[j]) == 0)
            {
                l = j;
            }
            j++;
        }
        if(l == -1)
        {
            list[k] = calloc(strlen(name[i])+1,sizeof(char));
            strcpy(list[k],name[i]);
            sum[k] = ch[i];
            k++;
        }else
        {
            sum[l] += ch[i];
        }
    }
    printf("Список без повторений с характеристикой:\n");

    printf("Имя\t\t\tХарактеристика\n");

    for(int i = 0; i < k; i++)
    {
        printf("%s\t\t\t%d\n",list[i],sum[i]);
    }

    for(int i = 0; i < n; i++)
    {
        free(name[i]);
        free(list[i]);
    }
    free(sum);
    free(ch);
    free(name);
    free(list);
}
