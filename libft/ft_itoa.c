/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucipol- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 12:38:34 by lucipol-          #+#    #+#             */
/*   Updated: 2025/05/16 15:50:21 by lucipol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_int_len(int n) // te da el size del numero que queremos convetir en un string
{
	int	size;

	size = 0;
	if (n == 0)
		return (1);
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*itoa_number;
	long  num;
	
	size = get_int_len(n);
	itoa_number = (char *)malloc(sizeof(char) * (size + 1));
	if (!itoa_number)
		return (NULL);
	itoa_number[size] = '\0';
	num = (long) n;
	if (num == 0)
		itoa_number[0] = '0';
	if (num < 0)
	{
		itoa_number[0] = '-';
		num = -num;
	}
	while (num != 0)
	{
    if (n < 0)
	      itoa_number[--size] = (num % 10) + '0';
		num = num / 10;
	}
	return (itoa_number);
}

// int	main(void)
//{
	//int		number;
	//char	*result;

	//number = 7637828;  // INT_MIN
	//result = ft_itoa(number);
	//if (result)
	//{
	//	printf("The number %d is: %s\n", number, result);
	//	free(result);
	//}
	//return (0);
//}

