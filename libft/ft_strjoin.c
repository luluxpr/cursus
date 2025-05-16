/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucipol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 12:31:08 by lucipol-          #+#    #+#             */
/*   Updated: 2025/05/14 20:20:12 by lucipol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*dst;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0,
	dst = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1)
			* sizeof(char));
	if (!dst)
		return (NULL);
	while (s1[i])
	{
		dst[j] = s1[i];
		j++;
		i++;
		i = 0;
	}
	while (s2[i])
	{
		dst[j] = s2[i]
			j++;
		dst[j] = 0;
	}
	return (dst);
}
