/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucipol- <lucipol-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:23:28 by lucipol-          #+#    #+#             */
/*   Updated: 2025/05/10 22:45:23 by lucipol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == 0)
		return ((char *) big);
	while (big[i] && i < n)
	{
		while (big[i + j] == little[j] && big[i + j] && i + j < n)
		{
			j++;
			if (little [j] == 0)
				return ((char *) big + i);
		}
		i++;
		j = 0;
	}
	return (NULL);
}
