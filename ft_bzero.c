/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem <absalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 09:21:28 by absalem           #+#    #+#             */
/*   Updated: 2023/07/16 11:01:14 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"

 void ft_bzero(void *s, size_t n)
{
    size_t i;
    i = 0;

    unsigned char *p;
    p = (unsigned char*)s;
   
    while(i < n)
    {
        p[i++]= '\0';
    }
}

//  int main() {

//    char str[] = {'1','2','3','4'};
//         size_t n = 4;
// bzero(str,n);
// printf("%s",str);

//  }