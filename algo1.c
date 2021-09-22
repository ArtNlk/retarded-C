#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() //В оригинале void
{
    setlocale(LC_ALL, "ru_RU.UTF8");//Еще попробовать "Rus" "Russian" "ru-RU"
    int *a; // Переменные. а - указатель на int, см презентацию "указатели"
    int n;
    int sum;
    int i;
    printf("Введите количество чисел ");
    scanf("%d",&n); //Считывание целого числа. Знаки формата: %c - char, %d - int, %f - float, %lf - double
    a=(int*) calloc(n,sizeof(int)); //Выделение n мест, каждое размером с int
    printf("введите числа");
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);//Считывание целого числа.
        // Запись &a[i] значит: взять значение по индексу i в а и взять адрес этого места (& - опреатор взятия адреса)
    }
    sum=0;
    for(i=0; i<n; i++)
    {
        sum+=a[i];
    }
    printf("сумма чисел= %d", sum);
    free(a);//Этого нет в оригинале, но душа болит память не освобождать.
    // Если мы вызовем оригинальный код миллион раз с миллионом чисел, мы получим ошибку.

    return 0;//Тоже не в оригнал
}
