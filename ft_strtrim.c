/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:21:35 by psmolin           #+#    #+#             */
/*   Updated: 2025/03/13 20:25:10 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_chinst(char const *s, char a)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == a)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s3;
	size_t	i;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (ft_chinst(set, s1[start]) && s1[start])
		start++;
	end = ft_strlen((char *)s1) - 1;
	while (ft_chinst(set, s1[end]) && end > start)
		end--;
	end++;
	s3 = (char *)malloc(end - start + 1);
	if (!s3)
		return (NULL);
	i = 0;
	while (i < end - start)
	{
		s3[i] = s1[start + i];
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
