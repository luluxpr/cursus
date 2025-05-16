/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucipol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 12:50:59 by lucipol-          #+#    #+#             */
/*   Updated: 2025/05/13 12:51:02 by lucipol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_strmapi(char *s, void(*f)(unsigned int, char*))
{
    size_t i;
    size_t len;
    char new_s

    if (!s || !f)
        return (NULL);
    len = ft_strlen(s);
    new_s = (char *)malloc(sizeof(char) *(len +1));
    if (!new_s)
        return (NULL);
    i = 0;
    while (i < len)
    {
        new_c[i] = f((unsigned int)i, s[i]);
        i++;
    }
    new_s[len] = '\0';
    return (new_s);
}
