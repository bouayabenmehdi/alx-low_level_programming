#include <stdio.h>

/**
 * main - prints the size of various data types
 *
 * Return: 0 if successful, non-zero otherwise
 */
int main(void)
{
    printf("char size: %lu byte(s)\n", sizeof(char));
    printf("int size: %lu byte(s)\n", sizeof(int));
    printf("long int size: %lu byte(s)\n", sizeof(long int));
    printf("long long int size: %lu byte(s)\n", sizeof(long long int));
    printf("float size: %lu byte(s)\n", sizeof(float));

    return (0);
}
