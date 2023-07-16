/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem <absalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 08:33:58 by absalem           #+#    #+#             */
/*   Updated: 2023/07/09 16:17:06 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	ft_tolower(int c)
{
	if ((c >= 'A' && c<='Z'))
    return(c + 32);

else
    return(c);
}

// int main() {
//     char c;

//     c = 'a';
//     printf("\n%c -> %c", c, ft_tolower(c));

//     c = 'D';
//     printf("\n%c -> %c", c, ft_tolower(c));

//     c = '9';
//     printf("\n%c -> %c", c, ft_tolower(c));
//     return 0;
// }

