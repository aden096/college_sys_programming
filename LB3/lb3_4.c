#include <stdio.h>
#include <stdlib.h>

int* max(int*, int);
int* min(int*, int);
void swap(int*, int*);
void arrprint(int*, int);

int main(void)
{
    int n = 0;
    printf("Введіть розмір масиву N: ");
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++)
        *(arr + i) = rand();
    
    printf("=== 1. Початковий масив ===\n");
    arrprint(arr, n);

    int *max_ptr = max(arr, n);
    int *min_ptr = min(arr, n);

    printf("=== 2. Результати пошуку ===\n");
    printf(" Мінімальний  елемент: значення = %d | адреса = %p\n", *min_ptr, min_ptr);
    printf(" Максимальний елемент: значення = %d | адреса = %p\n", *max_ptr, max_ptr);
    
    swap(max_ptr, min_ptr);

    printf("=== 3. Результуючий масив після обміну ===\n");
    arrprint(arr, n);

    return 0;
}

int* max(int* arr, int len)
{
    int *max_p = arr;
    for (int i = 0; i < len; i++)
    {
        if (*(arr + i) > *max_p)
            max_p = arr + i;
    }
    return max_p;
}

int* min(int* arr, int len)
{
    int *min_p = arr;
    for (int i = 0; i < len; i++)
    {
        if (*(arr + i) < *min_p)
            min_p = arr + i;
    }
    return min_p;
}

void swap(int *a, int *b)
{
    int tmp = *b;
    *b = *a;
    *a = tmp;
}

void arrprint(int* arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("Елемент %d:\tзначення = %d\t| адреса = %p\n", i, *(arr+i), arr + i);
    }
}