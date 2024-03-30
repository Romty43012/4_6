/***********************************************
 * АлтГУ, ИМиИТ, Кафедра информатики           *
 * Курс "Основы программирования"              *
 * Файл: zadaniye1.с						   *
 *                                             *
 * Программа для сортировки                    *
 *                                             *
 ***********************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int sort4(int dir, double* A, double* B, double* C, double* D)
{
    if (*A == *B && *A == *C && *A == *D) { return 0; }

    int temp;
    for (int i = 0; i < 3; i++)
    {
        if (*A > *B)
        {
            temp = *A;
            *A = *B;
            *B = temp;
        }
        if (*B > *C)
        {
            temp = *B;
            *B = *C;
            *C = temp;
        }
        if (*C > *D)
        {
            temp = *C;
            *C = *D;
            *D = temp;
        }
    }

    if (dir == 1) { printf("%lf %lf %lf %lf \n", *A, *B, *C, *D); }
    else if (dir == -1) { printf("%lf %lf %lf %lf \n", *D, *C, *B, *A); }
    
    return 1;
}
int main()
{
    setlocale(LC_ALL, "russian");
    for (int i = 0; i < 2; i++)
    {

        int dir1;
        double A1, B1, C1, D1;

        printf("Введите 1, если упорядочить числа нужно по возрастанию и -1, если по убыванию: ");
        scanf("%d", &dir1);

        printf("Введите 4 числа через пробел: ");
        scanf("%lf %lf %lf %lf", &A1, &B1, &C1, &D1);

        int result1 = sort4(dir1, &A1, &B1, &C1, &D1);
        printf("%d \n", result1);
    }
    return 0;
}
