/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:21:35 by psmolin           #+#    #+#             */
/*   Updated: 2025/03/10 16:50:50 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <unistd.h>
// #include <ctype.h>

// int	main (void)
// {
// 	printf("%d %d\n", ft_isalpha('a'), isalpha('a') );
// 	printf("%d %d\n", ft_isalpha('q'), isalpha('q') );
// 	printf("%d %d\n", ft_isalpha('T'), isalpha('T') );
// 	printf("%d %d\n", ft_isalpha('_'), isalpha('_') );
// }
