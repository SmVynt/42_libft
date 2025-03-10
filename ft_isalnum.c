/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:21:35 by psmolin           #+#    #+#             */
/*   Updated: 2025/03/10 16:50:48 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')
		|| (a >= '0' && a <= '9'))
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <unistd.h>
// #include <ctype.h>

// int	main (void)
// {
// 	printf("%d %d\n", ft_isalnum('a'), isalnum('a') );
// 	printf("%d %d\n", ft_isalnum('Q'), isalnum('Q') );
// 	printf("%d %d\n", ft_isalnum('2'), isalnum('2') );
// 	printf("%d %d\n", ft_isalnum('_'), isalnum('_') );
// }
