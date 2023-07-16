/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem <absalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:15:17 by absalem           #+#    #+#             */
/*   Updated: 2023/07/15 15:37:43 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_strchr(const char *s, int c)
{
 while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
			s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return (NULL);
}




// int main()
// {
//     char str[] = "intera login @absalem";
//     char *ptr;
    
//     ptr = ft_strchr(str,'@');
//     if (ptr != NULL) {
//         printf("%s\n", ptr);
//     } else {
//         printf("not found\n");
//     }

// char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
// 	char *d1 = strchr(src, '\0');
// 	char *d2 = ft_strchr(src, '\0');

// 	if (d1 == d2)
// 		exit(TEST_SUCCESS);
// 	exit(TEST_FAILED);

// }