/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem <absalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 08:57:36 by absalem           #+#    #+#             */
/*   Updated: 2023/07/12 17:33:27 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	j;

	j = 0;

	if (!haystack && !len)
    return (NULL);
    if (!*needle)
    return ((char *)haystack);

    while (*haystack && len--)
    {
    j = 0;
    while (*(haystack + j) == *(needle + j)&& j <= len)
        {
            if ((*(needle + j +1) == '\0'))
                return ((char *)haystack);
            j++;
        }
    haystack++;
    }
return (NULL);
}

// int main(void) 
// {


//   char haystack[] = "This is the way.";
//   char needle[] = "the";
//   char *the = ft_strnstr(haystack, needle,30);
//   printf(" %s\n" ,the);
  
//   char now[] = "now";
//   char *fail = strstr(haystack, now);
//   if (fail == NULL) printf("failed to find string!\n");

//   return 0;
// }