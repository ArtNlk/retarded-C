#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() //В оригинале void. Все пишут int, везде, всегда
{
    setlocale(LC_ALL, "ru_RU.UTF8");
    int *a;
    int n;
    int sum;
    int i;
    printf("Введите количество чисел ");
    scanf("%d",&n);
    a=(int*) calloc(n,sizeof(int));
    printf("введите числа");
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    sum=0;
    for(i=0; i<n; i++)
    {
        sum+=a[i];
    }
    printf("сумма чисел= %d", sum);
    free(a);//Этого нет в оригинале, но душа болит память не освобождать

    return 0;//Тоже не в оригнале, но это стандарт же, камон
}
