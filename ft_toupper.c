/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem <absalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 08:02:54 by absalem           #+#    #+#             */
/*   Updated: 2023/07/09 16:17:09 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int ft_toupper(int c)
{

if((c>='a' && c<='z'))
    return(c - 32);

else
    return(c);
}

//int main() {
 //   char c;

   // c = 'a';
   // printf("\n%c -> %c", c, ft_toupper(c));

    //c = 'D';
    //printf("\n%c -> %c", c, ft_toupper(c));

    //c = '9';
    //printf("\n%c -> %c", c, ft_toupper(c));
    //return 0;
//}
