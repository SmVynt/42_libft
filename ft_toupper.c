/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:21:35 by psmolin           #+#    #+#             */
/*   Updated: 2025/03/10 20:25:16 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>

// int	main (void)
// {
// 	printf("%d Vs %d \n", ft_toupper('a'), toupper('a'));
// 	printf("%d Vs %d \n", ft_toupper('A'), toupper('A'));
// 	printf("%d Vs %d \n", ft_toupper(-6), toupper(-6));
// 	printf("%d Vs %d \n", ft_toupper(256), toupper(256));
// 	printf("%d Vs %d \n", ft_toupper('q'), toupper('q'));
// 	printf("%d Vs %d \n", ft_toupper('\n'), toupper('\n'));

// 	return (0);
// }
