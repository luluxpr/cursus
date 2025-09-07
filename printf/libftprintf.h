#ifdef FT_PRINTF_H
# define FT_PRINTF_F

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <stdarg.h>

int ft_printf(const char *format, ...);
size_t  print_char(int c);
size_t  print_str(char *str);
int printf_format(char specifier, va_list ap);
size_t	print_digit(int n);
size_t print_hexa(unsigned long int n, unsigned long base, char specifier);
size_t    print_ptr(void *ptr);

#endif