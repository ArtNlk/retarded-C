#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int summing(int* a, int n)
{
    int sum;
    sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=a[i];
    }
    return sum;
}

int main() //В оригинале void
{
    setlocale(LC_ALL, "ru_RU.UTF8");//Еще попробовать "Rus" "Russian" "ru-RU"
    int *a; // Переменные. а - указатель на int, см презентацию "указатели"
    int n;
    int sum;
    printf("Number of numbers ");
    scanf("%d",&n); //Считывание целого числа. Знаки формата: %c - char, %d - int, %f - float, %lf - double
    a=(int*) calloc(n,sizeof(int)); //Выделение n мест, каждое размером с int
    printf("Numbers: \n");
    for (int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);//Считывание целого числа.
        // Запись &a[i] значит: взять значение по индексу i в а и взять адрес этого места (& - опреатор взятия адреса)
    }
    sum = summing(a,n);
    printf("sum= %d", sum);
    free(a);//Этого нет в оригинале, но душа болит память не освобождать.
    // Если мы вызовем оригинальный код миллион раз с миллионом чисел, мы получим ошибку.

    return 0;//Тоже не в оригнал
}
