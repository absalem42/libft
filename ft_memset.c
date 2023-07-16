/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem <absalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 07:57:11 by absalem           #+#    #+#             */
/*   Updated: 2023/07/16 10:36:24 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"

 void *ft_memset(void *b, int c, size_t len)
{

unsigned char *p;

p = (unsigned char*)b;

while (len > 0)
{
*p++ = (unsigned char)c;
len--;
}
return(b);
}

int main()
{
char str[] = "abdullah";
ft_memset(str,'9',3);
printf("%s\n",str);
char str1[] = "abdullah" ;
memset(str1,'0',3);
printf("%s\n",str1);
}