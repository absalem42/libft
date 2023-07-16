/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem <absalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:07:47 by absalem           #+#    #+#             */
/*   Updated: 2023/07/11 17:31:53 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int result = 0;
    int sign = 1;
    long i = 0;

    // Ignore leading whitespace


    while((str[i] >= 9 && str[i] <=13) || str[i] == 32)
        i++;

    // Handle optional sign
    if (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            sign = -1;
        i++;
    }

    // Convert digits to integer

    while (str[i] >= '0' && str[i] <= '9') 
    {
        result = result * 10 + (str[i] - '0');
        i++;
        // if(result> LONG_MAX / 10 || (result ==LONG_MAX/10 && str[i] - '0' >7))
		// 	{
		// 		if(sign == 1)
		// 		return -1;
		// 		else 
		// 		return 0;
		// 	}
    }

    return result * sign;
}

// int main()
// {
//     char str[] = "12345";
//     int num = ft_atoi(str);
//     printf("Converted number: %d\n", num);

//     return 0;
// }



// while((*str >= 9 && *str <=13) || *str == 32)
//     str++;
// return(str);