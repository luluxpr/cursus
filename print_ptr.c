#include "libftprintf.h"
#include <stddef.h>

size_t    print_ptr(void *ptr)
{
    size_t count;

    count = 0;
    if (!ptr)
        count += print_str("null");
    else 
        count += print_str('0x');
        count += print_hexa((unsigned long)ptr, 16, 'p');
    return (count);
}