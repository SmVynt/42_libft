/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:21:35 by psmolin           #+#    #+#             */
/*   Updated: 2025/03/10 21:34:33 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*temp;

	i = 0;
	temp = NULL;
	while (s[i])
	{
		if (s[i] == c)
			temp = ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		temp = (char *)&s[i];
	return (temp);
}

// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>

// int	main (void)
// {
// 	char *s = "HelloWorld";

// 	printf("%p vs %p\n", ft_strrchr(s, 'H'), strrchr(s, 'H'));
// 	printf("%p vs %p\n", ft_strrchr(s, 'o'), strrchr(s, 'o'));
// 	printf("%p vs %p\n", ft_strrchr(s, 'd'), strrchr(s, 'd'));
// 	printf("%p vs %p\n", ft_strrchr(s, '\0'), strrchr(s, '\0'));
// 	printf("%p vs %p\n", ft_strrchr(s, 'p'), strrchr(s, 'p'));
// 	return (0);
// }
