/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:21:35 by psmolin           #+#    #+#             */
/*   Updated: 2025/03/11 18:00:52 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Compile it with
// cc main.c -L. -lft -I.

#include "libft.h"

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>

void    print_split_result(char **result)
{
	size_t i = 0;

	if (!result)
	{
		printf("Error: ft_split returned NULL\n");
		return;
	}
	while (result[i])
	{
		printf("Word %zu: \"%s\"\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
}

int	main (void)
{

	// printf("ft_isalpha\n");
	// printf("%d %d\n", ft_isalpha('a'), isalpha('a') );
	// printf("%d %d\n", ft_isalpha('q'), isalpha('q') );
	// printf("%d %d\n", ft_isalpha('T'), isalpha('T') );
	// printf("%d %d\n", ft_isalpha('_'), isalpha('_') );
	// printf("\n");

	// printf("ft_isdigit\n");
	// printf("%d %d\n", ft_isdigit('0'), isdigit('0') );
	// printf("%d %d\n", ft_isdigit('9'), isdigit('9') );
	// printf("%d %d\n", ft_isdigit('T'), isdigit('T') );
	// printf("%d %d\n", ft_isdigit('_'), isdigit('_') );
	// printf("\n");

	// printf("ft_isalnum\n");
	// printf("%d %d\n", ft_isalnum('a'), isalnum('a') );
	// printf("%d %d\n", ft_isalnum('Q'), isalnum('Q') );
	// printf("%d %d\n", ft_isalnum('2'), isalnum('2') );
	// printf("%d %d\n", ft_isalnum('_'), isalnum('_') );
	// printf("\n");

	// printf("ft_isascii\n");
	// char	b;
	// b = (char)-6;
	// printf("%d %d\n", ft_isascii('0'), isascii('0') );
	// printf("%d %d\n", ft_isascii('9'), isascii('9') );
	// printf("%d %d\n", ft_isascii(215), isascii(215) );
	// printf("%d %d\n", ft_isascii(b), isascii(b) );
	// printf("\n");

	// printf("ft_isprint\n");
	// printf("%d %d\n", ft_isprint('0'), isprint('0') );
	// printf("%d %d\n", ft_isprint(48), isprint(48) );
	// printf("%d %d\n", ft_isprint('\n'), isprint('\n') );
	// printf("%d %d\n", ft_isprint('_'), isprint('_') );
	// printf("\n");


	printf("ft_split\n");
	char **result;
	printf("Test 1: Splitting \"hello world test\" by ' '\n");
	result = ft_split("hello world test", ' ');
	print_split_result(result);
	printf("\nTest 2: Splitting \"  multiple   spaces  \" by ' '\n");
	result = ft_split("  multiple   spaces  ", ' ');
	print_split_result(result);
	printf("\nTest 3: Splitting \"a-b-c--d\" by '-'\n");
	result = ft_split("a-b-c--d", '-');
	print_split_result(result);
	printf("\nTest 4: Splitting \"----\" by '-'\n");
	result = ft_split("----", '-');
	print_split_result(result);
	printf("\nTest 5: Splitting an empty string \"\" by ','\n");
	result = ft_split("", ',');
	print_split_result(result);
	printf("\nTest 6: Splitting \"hello\" by 'x'\n");
	result = ft_split("hello", 'x');
	print_split_result(result);
	printf("\n");

	// TURN ON FOR LEAKS TEST
	//while(1);

	return (0);
}
