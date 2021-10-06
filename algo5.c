#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"ru");
    int l = -1;
    int n = 0;
    int start = 0;
    int mid = 0;
    int end = 0;
    int cmp = 0;
    char** name;
    char* ctrl;
    char temp[200];

    printf("Введи  n:\n");
    scanf("%d",&n);

    name = calloc(n,sizeof(char*));

    printf("Введи строки: \n");

    for(int i = 0; i < n; i++)
    {
        scanf("%s",temp);
        name[i] = calloc(strlen(temp)+1,sizeof(char));
        strcpy(name[i],temp);
    }

    printf("Введи искомое:\n");
    scanf("%s",temp);
    ctrl = calloc(strlen(temp)+1,sizeof(char));
    strcpy(ctrl,temp);

    end = n-1;

    while((l == -1) && (start <= end))
    {
        mid = (start+end)/2;
        cmp = strcmp(name[mid],ctrl);
        if(cmp == 0){l = mid;}
        if(cmp < 0){start = mid+1;}
        if(cmp > 0){end = mid-1;}
    }
    printf("Искомое по индексу %d",l);

    for(int i = 0; i < n; i++)
    {
        free(name[i]);
    }

    free(name);
    free(ctrl);
}
