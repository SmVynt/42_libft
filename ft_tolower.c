/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:21:35 by psmolin           #+#    #+#             */
/*   Updated: 2025/03/10 21:12:57 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>

// int	main (void)
// {
// 	printf("%d Vs %d \n", ft_tolower('a'), tolower('a'));
// 	printf("%d Vs %d \n", ft_tolower('A'), tolower('A'));
// 	printf("%d Vs %d \n", ft_tolower(-6), tolower(-6));
// 	printf("%d Vs %d \n", ft_tolower(256), tolower(256));
// 	printf("%d Vs %d \n", ft_tolower('q'), tolower('q'));
// 	printf("%d Vs %d \n", ft_tolower('\n'), tolower('\n'));

// 	return (0);
// }
