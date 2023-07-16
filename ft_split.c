/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem <absalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 08:00:40 by absalem           #+#    #+#             */
/*   Updated: 2023/07/16 15:33:46 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

static int count_words(cha const *s, char c)
{
    int word_count;
    word_count = 0;

    while(*s)
    {
        if (*s == c)
        {
         s++;   
        }
        
        word_count++;
        else
        while (*s != c && *s)
            {
                s++
            }
        return(word_count);
    }

static char	*copy_word(char *dest, const char *src, int n)
{
	char		*dest_ptr;
	const ch

	dest_ptr = dest;
	src_ptr = src;
	while (n--)
		*dest_ptr++ = *src_ptr++;
	*dest_ptr = '\0';
	return (dest);
}
    
    



    
}
char **ft_split(char const *s, char c)
{



    
}

int main()
{



    
}






