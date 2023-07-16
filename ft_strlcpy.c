/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem <absalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 08:42:59 by absalem           #+#    #+#             */
/*   Updated: 2023/07/09 16:16:55 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	if (dstsize != 0)
	{
		while ((i < dstsize - 1) && (src[i] != '\0'))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (j);
}

// int main()
// {
// char s[] = "abdullah" ;
// char c[] = "";
// int result;
// result = ft_strlcpy(c,s,9);
// printf("%zu\n",ft_strlcpy(c,s,9));
// printf("%lu\n",strlcpy(c,s,9));
// // printf("%s\n", c);
// }