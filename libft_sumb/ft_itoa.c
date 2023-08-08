/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem <absalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 08:13:46 by absalem           #+#    #+#             */
/*   Updated: 2023/07/27 12:26:32 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countdigt(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	unsigned int	number;
	char			*str;
	size_t			len;

	len = countdigt(n);
	number = n;
	if (n < 0)
	{
		number = -1 * n;
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (number == 0)
		str [--len] = '0';
	while (number)
	{
		str[--len] = number % 10 + '0';
		number = number / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
