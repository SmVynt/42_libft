/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:21:35 by psmolin           #+#    #+#             */
/*   Updated: 2025/03/12 12:14:46 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_word_count(char const *s, char c)
{
	size_t	i;
	size_t	wc;
	char	prev;

	i = 0;
	wc = 0;
	prev = c;
	while (s[i])
	{
		if (s[i] != c && prev == c)
			wc++;
		prev = s[i];
		i++;
	}
	return (wc);
}

static size_t	ft_word_length(char const *s1, char c)
{
	size_t	len;

	len = 0;
	while (s1[len] != '\0' && s1[len] != c)
		len++;
	return (len);
}

static void	ft_wrdcpy(char *dst, char const *src, char c)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && src[i] != c)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

static void	ft_freearray(char **split, size_t cur)
{
	while (cur > 0)
	{
		cur --;
		free (split[cur]);
	}
	free (split);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	size_t	cur;

	ret = (char **)malloc((ft_word_count(s, c) + 1) * sizeof(char *));
	if (!ret)
		return (NULL);
	cur = 0;
	while (*s)
	{
		if (*s != c && (cur == 0 || *(s - 1) == c))
		{
			ret[cur] = (char *)malloc(ft_word_length(s, c) + 1);
			if (!ret[cur])
			{
				ft_freearray(ret, cur);
				return (NULL);
			}
			ft_wrdcpy (ret[cur], s, c);
			cur++;
		}
		s++;
	}
	ret[cur] = 0;
	return (ret);
}
