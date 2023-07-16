/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem <absalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 12:55:17 by absalem           #+#    #+#             */
/*   Updated: 2023/07/15 13:05:10 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	int i;
	i =0 ;
	if(!(s))
		return ;
	while(s[i])
	{
		write(fd,&s[i],1);
		i++;
	}
	write(fd,"\n",1);
}

// int main()
// {
//     char s[] = "abdullah";
//     ft_putendl_fd(s,1);    
// }