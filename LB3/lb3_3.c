#include <stdio.h>

void arrprint(double*, int);

int main(void)
{
    // Values from lb3_1.c
    double group_n = 83, ord_n = 237, study_year = 0.249540; 

    // Before
    double arr[] = {1, 2, group_n, ord_n, study_year};
    
    printf("Масив до змін: ");
    arrprint(arr, 5);

    // Changes
    arr[0] = 79;
    arr[1] = 3;
    for (int i = 0; i < 5; i++)
    {
        // Variant №1
        arr[i] += 1;
    }
    
    // After
    printf("Масив після змін: ");
    arrprint(arr, 5);
    
    return 0;
}

void arrprint(double *arr, int length)
{
    printf("[ ");
    for (int i = 0; i < 5; i++)
    {
        printf("%g ", arr[i]);
    }
    printf("]\n");
}