/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem <absalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:55:59 by absalem           #+#    #+#             */
/*   Updated: 2023/07/11 12:59:26 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *str1;
    unsigned char *str2;

    i = 0;
    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;

while (i < n)
    {
        if (str1[i] != str2[i])
        {
            return (str1[i] - str2[i]);
        }
        i++;
    }

    return 0;
}

// int main()
// {
//     char str1[] = "abdullah";
//     char str2[] = "abdulla ";

//     printf("%d\n",ft_memcmp(str1,str2,8));
//     printf("%d\n",memcmp(str1,str2,8));


// }