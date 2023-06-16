#include <unistd.h>

/**
 * _putchar - This function writes char c to stdout
 * @c: Character to print to stdout
 *
 * Return: 1 on success otherwise return -1
 */

int _putchar(char c)
{
        return(write(1, &c, 1));
}
