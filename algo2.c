#include <stdio.h>
#include <malloc.h>
#include <locale.h>
#include <limits.h>

int main()
{
    setlocale(LC_ALL,"ru_RU.UTF8");

    int* a = 0;
    int n, min, l = 0;

    printf("Введи число чисел\n");
    scanf("%d",&n);

    printf("Введи числа\n");
    a = calloc(n,sizeof(int));
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    min = INT_MAX;
    l = -1;

    for(int i = 0; i < n; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
            l = i;
        }
    }

    printf("Минимум = %d, под индексом %d\n",min,l);
    free(a);

    return 0;
}
