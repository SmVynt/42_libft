/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:21:35 by psmolin           #+#    #+#             */
/*   Updated: 2025/03/10 21:34:13 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	ret;
	int		neg;
	size_t	i;

	i = 0;
	neg = 1;
	ret = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = ret * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(ret * neg));
}

// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>
// #include <stdlib.h>

// int	main (void)
// {
// 	printf("%d vs %d\n", ft_atoi("-1024"), atoi("-1024"));
// 	printf("%d vs %d\n", ft_atoi("1024a"), atoi("1024a"));
// 	printf("%d vs %d\n", ft_atoi(" \n\t\v\f\r1024a"), atoi(" \n\t\v\f\r1024a"));
// 	printf("%d vs %d\n", ft_atoi("+-1024a"), atoi("+-1024a"));
// 	printf("%d vs %d\n", ft_atoi("+1024a"), atoi("+1024a"));
// 	printf("%d vs %d\n", ft_atoi("+10 24a"), atoi("+10 24a"));
// 	printf("%d vs %d\n", ft_atoi("-2147483648"), atoi("-2147483648"));
// 	printf("%d vs %d\n", ft_atoi("21474836000"), atoi("21474836000"));
// 	return (0);
// }
