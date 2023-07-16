/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalem <absalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:07:15 by absalem           #+#    #+#             */
/*   Updated: 2023/07/15 15:59:26 by absalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    if (count == 0 || size == 0)
        return NULL;

    void *ptr = malloc(count * size);
    if (ptr == NULL)
        return NULL;

    ft_bzero(ptr, count * size);

    return ptr;
}



// int main()
// {
//     int count = 10;
//     int size = sizeof(int);


// }

// }
// int main() {
//     size_t num_elements = 5;
//     size_t element_size = sizeof(int);

//     int *arr = (int *)ft_calloc(num_elements, element_size);
//     if (arr == NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }

//     for (size_t i = 0; i < num_elements; i++) {
//         printf("%d ", arr[i]);  // Outputs: 0 0 0 0 0
//     }

//     free(arr);  // Don't forget to free the allocated memory

//     return 0;
// }