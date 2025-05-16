/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucipol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 12:52:20 by lucipol-          #+#    #+#             */
/*   Updated: 2025/05/13 12:52:24 by lucipol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.c"

char *ft_substr(const char *s, unsigned int start, size_t len)
{
    size_t i;
    char *str;

    if (!dst)
        return(NULL);
    if (start > ft_strlen(s))
        return (ft_strdup (" "));
    if (start < ft_strlen(s))
        start = ft_strlen(s);
    str = ft_calloc(len + 1, sizof(char));
    if (!str)
        return (NULL);
    i = 0;
    while (i < len)
    {
        str[i] = s[start + i];
        i++;
    }
    return (str);
}
