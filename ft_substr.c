/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem <absalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 08:37:28 by absalem           #+#    #+#             */
/*   Updated: 2023/07/15 11:05:11 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub;
    size_t str_len;
    size_t i;

    i = 0;

    if (s == NULL)
        return NULL;
    str_len = ft_strlen(s);

    if (start >= str_len)
        return ft_strdup("");

    if (len > str_len - start)
        len = str_len - start;
        
    sub = (char *)malloc((len + 1) * sizeof(char));
    if (sub == NULL)
        return NULL;

    
    while (i < len)
    {
        sub[i] = s[start + i];
        i++;
    }

    sub[i] = '\0';

    return sub;
}

// int main()
// {
// 	char *s;
// 	unsigned int start;
// 	unsigned int len;
// 	s= "abdullah";
// 	start = 3;
// 	len = sizeof(s);
// 	char *result = ft_substr(s,start,len);
// 	// char *result1 = substr(s,start,len);
// 	printf("%s\n",result);
// 	// printf("%s",result1);
// }

