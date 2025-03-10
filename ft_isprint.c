/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:21:35 by psmolin           #+#    #+#             */
/*   Updated: 2025/03/10 16:50:55 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int a)
{
	if (a >= ' ' && a <= '~')
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <unistd.h>
// #include <ctype.h>

// int	main (void)
// {
// 	printf("%d %d\n", ft_isprint('0'), isprint('0') );
// 	printf("%d %d\n", ft_isprint(48), isprint(48) );
// 	printf("%d %d\n", ft_isprint('\n'), isprint('\n') );
// 	printf("%d %d\n", ft_isprint('_'), isprint('_') );
// }
