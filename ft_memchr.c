/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem <absalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 09:21:14 by absalem           #+#    #+#             */
/*   Updated: 2023/07/11 10:54:29 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 void *ft_memchr(const void *s, int c, size_t n)
 {
     size_t i;
     i = 0;
    unsigned char *source;
	source = (unsigned char*)s;


	if(n == 0 && source == NULL)
	{
	return (NULL);
	}
	while (i < n)
	{
	if(source[i] == (unsigned char)c)
	return (void*)(source +i);
	i++;
	}
	return NULL;
 }

// int main(void)
// {

//   char str[] = "abdullah";

//   char *domain = memchr(str, 'u', strlen(str));

//   domain++;

//   printf("domain: %s\n", domain);
  
// }