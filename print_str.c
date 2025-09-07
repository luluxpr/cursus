#include "libftprintf.h"
#include <stddef.h>

size_t  print_str(char *str)
{
    int count;

    count = 0;
    if(!str)
        str = "(null)";
    while (*str != '\0')
    {
        print_char((int)*str);
        count++;
        str++;
    }
    return(count);
}