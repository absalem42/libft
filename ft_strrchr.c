/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem <absalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 08:41:50 by absalem           #+#    #+#             */
/*   Updated: 2023/07/09 15:21:10 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strrchr(char const *s, int c)
{
	char const	*len;

	len = NULL;
	while (*s)
	{
		if (*s == (char)c)
			len = s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return ((char *)len);
}

// int main()
// {
//     char str[] = "intera login @absalem";
//     char *ptr;
//     char *ptr1;
    
//     ptr = ft_strrchr(str,'@');
//     if (ptr != NULL) 
//     {
//         printf("%s\n", ptr);
//     } else 
//     {
//         printf("not found\n");
//     }

//     ptr1 = strrchr(str,'@');
//     if (ptr != NULL)
//      {
//         printf("%s\n", ptr1);
//     } else 
//     {
//         printf("not found\n");
//     }
// }