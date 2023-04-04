#include "main.h"

/**
 * my_memcpy - function that copies a memory area
 * @dest: pointer to the destination memory area where data will be copied
 * @src: pointer to the source memory area from which data will be copied
 * @n: number of bytes to be copied
 *
 * Return: pointer to the destination memory area
 */

char *my_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
    {
        dest[i] = src[i];
    }
    return dest;
}

