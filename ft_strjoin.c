/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem <absalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:10:32 by absalem           #+#    #+#             */
/*   Updated: 2023/07/15 15:21:51 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
        char *new;
		size_t i;
		size_t total_len;
        size_t j = 0;
        
		i = 0;
        
		if(!s1 || !s2)
			return NULL;
            
		total_len = ft_strlen(s1) + ft_strlen(s2);
        
		if(!(new = malloc(sizeof(char) *total_len +1 )))
			return NULL;
        
		while(s1[i])
		{
			new[i] = s1[i];
			i++;
		}
		
		while(s2[j])
		{
			new[i++] = s2[j++];
		}
		
		new[total_len] = '\0';
		return(new);
}

// int main()
// {
// 	char str[]="Abdullah";
// 	char str1[]="Ali";
// 	printf("%s\n",ft_strjoin(str,str1));
// 	// printf("%zu\n",strlcat(str1,str,8));
// }