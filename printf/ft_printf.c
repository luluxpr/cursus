#include "libftprintf.h"
#include <stdarg.h>

int printf_format(char specifier, va_list ap)
{
    int count;

    count = 0;
    if (specifier == 'c')
        count += print_char(va_arg(ap, int));
    else if (specifier == 's')
        count += print_str(va_arg(ap, char*));
    else if (specifier == 'd' || specifier == 'i')
        count += print_digit(va_arg(ap, int));
    else
        return(0);

    return(count);
}



int ft_printf(const char *format, ...)
{
   va_list ap;
   int  count;
   int i;

   count = 0;
   va_start (ap, format);
   i = 0;
   while (format[i] != '\0')
   {
        if (format[i] == '%')
        {
            i++;
            count += printf_format(format[i], ap);
        }
        else
        {
            write(1, &format[i], 1);
            count++;
        }
        i++;
   }
   va_end (ap);
   return count;
}
