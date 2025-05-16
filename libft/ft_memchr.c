/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucipol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 22:06:14 by lucipol-          #+#    #+#             */
/*   Updated: 2025/05/10 22:33:59 by lucipol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n);
{
    unsigned char *str;
    size_t i;
    unsigned char uc;

    str = (unsigned char *) s;
    uc = (unsigned char) c;
    i = 0;
    while (i < n)
    {
        if (str[i] == uc)
            return ((void *)&str[i];)
        i++;
    }
    return (NULL);
}
