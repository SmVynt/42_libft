/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:21:35 by psmolin           #+#    #+#             */
/*   Updated: 2025/03/11 00:04:18 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;

	if (size != 0 && (count > ((size_t) -1) / size))
		return (NULL);
	if (count == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * count);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < size * count)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>

// int	main(void)
// {
//     size_t count = 5;
//     size_t size = sizeof(int);

// 	// Test 1
//     int *arr = (int *)ft_calloc(count, size);
//     if (!arr)
//     {
//         printf("Test 1 Failed\n");
//         return (1);
//     }
//     int all_zero = 1;
//     for (size_t i = 0; i < count; i++)
//     {
//         if (arr[i] != 0)
//         {
//             all_zero = 0;
//             break;
//         }
//     }
//     printf("Test 1 Passed\n");
//     free(arr);
//     // Test 2
//     arr = (int *)ft_calloc(0, size);
//     if (!arr)
//         printf("Test 2 Passed\n");
//     else
//         free(arr);

//     // Test 3
//     arr = (int *)ft_calloc(count, 0);
//     if (!arr)
//         printf("Test 3 Passed\n");
//     else
//         free(arr);
//     //Test 4: Overflow test
//     size_t big_count = (size_t)-1 / 2;// Large number to trigger overflow
//     arr = (int *)ft_calloc(big_count, 2);
//     if (!arr)
//         printf("Test 4 Passed: Overflow detected\n");
//     else
//     {
//         printf("Test 4 Failed: Overflow not detected\n");
//         free(arr);
//     }

//     return (0);
// }
