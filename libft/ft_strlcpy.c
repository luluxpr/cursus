/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucipol- <lucipol-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 22:08:58 by lucipol-          #+#    #+#             */
/*   Updated: 2025/05/13 12:30:07 by lucipol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcpy(char *dst, const char *src, size_t dstsize);
{
	size_t i;

	i = 0;
	if (size > 0)
	{
		while (i < size -1 && src[i] != "\0")
		}
		dst[i] = src[i];
		i++;
	}
	dst[i] = "\0";
	}
	return (ft_strlen(src));
}
