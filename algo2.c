#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <locale.h>
#include <limits.h>

void minimum(int* a, int n,int *min, int *l)
{
    *min = INT_MAX;
    *l = -1;

    for(int i = 0; i < n; i++)
    {
        if(a[i] < *min)
        {
            *min = a[i];
            *l = i;
        }
    }
}

int main()
{
    setlocale(LC_ALL,"ru_RU.UTF8");

    int* a = 0;
    int n = 0, min = 0, l = 0;

    printf("Введи число чисел\n");
    scanf("%d",&n);

    printf("Введи числа\n");
    a = calloc(n,sizeof(int));
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    minimum(a,n,&min,&l);

    printf("Минимум = %d, под индексом %d\n",min,l);
    free(a);

    return 0;
}
