#include <stddef.h>
#include "libftprintf.h"

size_t  print_char(int c)
{
    write(1, &c, 1);
    return (1);
}