#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./hello <person_name>\n");
        return 1;
    }
    printf("Привіт, %s!\n", argv[1]);
    return 0;
}