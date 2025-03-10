/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:21:35 by psmolin           #+#    #+#             */
/*   Updated: 2025/03/10 16:50:52 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int a)
{
	if (a >= 0 && a <= 127)
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <unistd.h>
// #include <ctype.h>

// int	main (void)
// {
// 	char	b;

// 	b = (char)-6;
// 	printf("%d %d\n", ft_isascii('0'), isascii('0') );
// 	printf("%d %d\n", ft_isascii('9'), isascii('9') );
// 	printf("%d %d\n", ft_isascii(215), isascii(215) );
// 	printf("%d %d\n", ft_isascii(b), isascii(b) );
// }
