/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucipol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 22:08:11 by lucipol-          #+#    #+#             */
/*   Updated: 2025/05/10 22:58:12 by lucipol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strdup(const char *s1)
{
    char *dst;
    size_t i;

    dst = (char *) malloc(ft_strlen(s1) + 1);
    if (!dst)
        return (NULL);
    i = 0;
    while (s1[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = 0;
    return (dst);
}
