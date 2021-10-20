#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <locale.h>

int main()
{
    //setlocale(LC_ALL,"ru-RU");
    char str[200];
    char t[200];
    char* temp = t;
    char** w;
    int k,l;

    printf("Enter string: ");
    fgets(str,255,stdin);
    w = calloc(strlen(temp)+2,sizeof(char*));
    k=0;

    strcpy(temp,str);
    strcat(temp, " ");
    while(strlen(temp) > 0)
    {
        l = (strchr(temp,' ') - temp);
        if(l > 0)
        {
            w[k] = calloc(l+1,sizeof(char));
            strncpy(w[k],temp,l);
            k++;
        }
        temp += l+1;
    }

    for(int i =0; i < k; i++)
    {
        printf("%s\n",w[i]);
    }

    for(int i =0; i < k; i++)
    {
        free(w[i]);
    }

    free(w);
}
