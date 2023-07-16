/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem <absalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:33:42 by absalem           #+#    #+#             */
/*   Updated: 2023/07/11 12:28:32 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)

{
     unsigned char i = 0;

    while ((s1[i] != '\0' || s2[i] != '\0') && i < n) {
        unsigned char ch1 = (unsigned char)s1[i];
        unsigned char ch2 = (unsigned char)s2[i];

        if (ch1 != ch2) {
            return ch1 - ch2;
        }
        i++;
    }
    return 0;
}



// int main() {
//     const char* str1 = "Hello";
//     const char* str2 = "Hell";

//     int result = ft_strncmp(str1, str2, 5);

//     printf("%d\n",result);

// 	int result1 = strncmp(str1, str2, 5);

//     printf("%d\n",result1);
   
// }

// int main()
// {
//  printf("%d", ft_strncmp("Hello", "HelloWorld", 8));
// }




