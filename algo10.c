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
    char zn[] = " ,.!?;";
    char** w;
    int k;
    char tmp[200] = {0};
    printf("Enter string\n");
    fgets(str,200,stdin);
    strcat(str," ");
    k = 0;
    w = calloc(strlen(str),sizeof(char*));
    strcpy(tmp,"");
    for(int i = 0; i < strlen(str);i++)
    {
        if(strchr(zn,str[i]) == 0)
        {
            strncat(tmp,&str[i],1);
        } else {
            if (strlen(tmp) != 0) {
                w[k] = calloc(strlen(tmp) + 1, sizeof(char));
                strcpy(w[k], tmp);
                strcpy(tmp, "");
                k++;
            }
            if (str[i] != ' ') {
                w[k] = calloc(2, sizeof(char));
                strncat(w[k],&str[i],1);
                k++;
            }
        }

    }

    printf("Words:\n");
    for(int i = 0; i < k; i++)
    {
        printf("%s\n",w[i]);
    }

    for(int i = 0; i < k; i++)
    {
        free(w[i]);
    }
    free(w);
}
