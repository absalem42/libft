/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem <absalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:22:14 by absalem           #+#    #+#             */
/*   Updated: 2023/07/16 15:10:21 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void *ft_memmove(void *dst, const void *src, size_t len)
{
 char *source;
 char *dest;
 size_t i;

 source = (char *)src;
 dest = (char *)dst;
 i = 0;

   if (!src && !dst)
    {
        return(NULL);
    }
//  if (dest == NULL && source == NULL)
//         return NULL;

if (dest > source)
  	while (len-- > 0)
   	       dest[len] = source[len];
else
  	while (i < len)
       {
              dest[i] = source[i];
              i++;
       }
 return (dest);
}


// int main()
// {
//     char src[] = "Hello, World!";
//     char dst[50];

//     ft_memmove(dst, src, sizeof(src));
//     printf("Destination string after memmove: %s\n", dst);

//     memmove(dst, src, sizeof(src));
//     printf("Destination string after memmove: %s\n", dst);

   

//     return 0;
// }