/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:21:35 by psmolin           #+#    #+#             */
/*   Updated: 2025/03/10 16:50:54 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int a)
{
	if (a >= '0' && a <= '9')
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <unistd.h>
// #include <ctype.h>

// int	main (void)
// {
// 	printf("%d %d\n", ft_isdigit('0'), isdigit('0') );
// 	printf("%d %d\n", ft_isdigit('9'), isdigit('9') );
// 	printf("%d %d\n", ft_isdigit('T'), isdigit('T') );
// 	printf("%d %d\n", ft_isdigit('_'), isdigit('_') );
// }
