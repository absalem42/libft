/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem <absalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 10:32:27 by absalem           #+#    #+#             */
/*   Updated: 2023/07/11 09:05:34 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    size_t j;
    i = 0;
    j = 0;
    unsigned char *str;
    unsigned char *str1;

    str = (unsigned char*)dst;
    str1 = (unsigned char*)src;

    if (!src && !dst)
    {
        return(NULL);
    }

    while (i < n)
{
        str[i++] = str1[j++];
}
        return(dst);


}

// int main()
// {
//    char str[] = "abdullah";
//    char str1[50];
//    ft_memcpy(str1,str,sizeof(str1));

//    printf("%s",str1);

// }