#include <math.h>
#include <stdio.h>

// Global variables
int variant_number = 1;
int group_number = 79;

// Prototypes
int len(const char *s);
void sqrt_check(int number, const char *s);
int collegeyear(int group_number);

int main(void)
{
    // 02
    char name[] = "Денис";
    double vard = 3.14 * variant_number;
    // int vari = vard; 

    // 03
    const int NAME_NUMBER = len(name);
    // //        group_number, variant_number, name, vard, vari);
    
    //04
    int sum = 0;
    for (int i = variant_number + NAME_NUMBER; i > 0; i--)
    {
        sum += i;
    }
    printf("Кількість літер у повному імені(NAME_NUMBER): %i\nНомер за журналом: %i\nCума усіх чисел від 1 до %i: %i\n",
            NAME_NUMBER, variant_number, variant_number + NAME_NUMBER, sum);
    
    // 05
    sqrt_check(variant_number, name);
    
    // 06
    int n;
    printf("Введіть номер групи: ");
    scanf("%d", &n);
    printf("Курс: %i\n", collegeyear(n));
    return 0;
}

// Alternative to UTF-8
int len(const char *s) 
{
    int count = 0;
    while (*s) {
        // Рахуємо постійні байти в UTF-8 (ті, що не лежать в межах від 0x80 до 0хBF)
        if ((*s & 0xC0) != 0x80) {
            count++;
        }
        s++;
    }
    return count;
}

// Comparing sqrt of some number with sqrt length of string (why?)
void sqrt_check(int number, const char *s)
{
    // sqrt of string length
    int slen = len(s);

    // sqrt of given number
    double snum = sqrt(number);

    // Comparing
    if (snum > slen)
        printf("%fs\n", snum + slen);
    else if (snum < slen)
        printf("%fn\n", snum * slen);
    else    
        printf("%f %d\n", snum, slen);
}


// Returns college year by group number
int collegeyear(int group_number)
{
    switch (group_number)
    {
        case 92: case 93: case 94: case 95: case 96: case 97: case 98: case 99:
            return 1;

        case 87: case 88: case 89: case 90: case 91:
            return 2;

        case 81: case 82: case 83: case 84: case 85: case 86:
            return 3;

        case 75: case 76: case 77: case 78: case 79: case 80:
            return 4;
        
        default:
            return 0;
    }
}