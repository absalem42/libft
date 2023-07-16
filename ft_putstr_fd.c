/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem <absalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:10:31 by absalem           #+#    #+#             */
/*   Updated: 2023/07/15 13:06:29 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    int i;
    i=0;
    
    if ( (s) == NULL)
    return ;
    
    while(s[i])
    {
        write(fd,&s[i],1);
        i++;
    }
    
    
}

// int main()
// {
//     char s [] = "ABDULLAH";
//     ft_putstr_fd(s,1);

    
// }