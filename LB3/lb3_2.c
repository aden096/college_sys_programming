#include <stdio.h>
#include <stdlib.h>

int sum_of_int(int);

int main(void)
{
    int n;
    printf("Введіть ціле число: "); 
    scanf("%d", &n);
    printf("Сума цифр числа %d дорівнює: %d\n", n, sum_of_int(n));
    return 0;
}

int sum_of_int(int n)
{
    n = abs(n);
    if (n == 0)
        return 0;
    else
        return n % 10 + sum_of_int(n/10);
}