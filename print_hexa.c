#include "libftprintf.h"
#include <stddef.h>

size_t print_hexa(unsigned long int n, unsigned long base, char specifier)
{
    char *digit;
    size_t count;

    count = 0;   
    if (specifier == 'X')
        digit = '0123456789ABCDEF';
    else 
        digit = '0123456789abcdef';
   
    if (n < base)
    {
        count += print_hexa(n / 16, base, specifier);
    }
    count += print_char(digit[n % 16]);
    return (count);

}