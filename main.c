/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:21:35 by psmolin           #+#    #+#             */
/*   Updated: 2025/03/11 20:20:11 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Compile it with
// cc main.c -L. -lft -I.

#include "libft.h"

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>

// Extra functions for testing
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
		printf("-> %zu: \"%s\"\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
}

char	to_upper_if_even(unsigned int i, char c)
{
	if (i % 2 == 0)  
		return ft_toupper(c);
	return (c);
}

void	c_to_upper_if_even(unsigned int i, char *c)
{
	if (i % 2 == 0)  
		*c = ft_toupper(*c);
}

char	shift_char(unsigned int i, char c)
{
	i += 0;
	return (c + 1);
}

void	c_shift_char(unsigned int i, char *c)
{
	i += 0;
	*c = *c + 1;
}

void	test_ft_strmapi(char *str, char (*f)(unsigned int, char))
{
	char *result = ft_strmapi(str, f);
	if (result) {
		printf("%s -> %s\n", str, result);
		free(result);
	} else {
		printf("Memory allocation failed!\n");
	}
}

void	test_ft_striteri(char *str, void (*f)(unsigned int, char*))
{
	printf("%s -> ", str);
	ft_striteri(str, f);
	printf("%s\n", str);
}


////////
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


	// printf("ft_split\n");
	// char **result;
	// printf("Test 1: Splitting \"hello world test\" by ' '\n");
	// result = ft_split("hello world test", ' ');
	// print_split_result(result);
	// printf("Test 2: Splitting \"  multiple   spaces  \" by ' '\n");
	// result = ft_split("  multiple   spaces  ", ' ');
	// print_split_result(result);
	// printf("Test 3: Splitting \"a-b-c--d\" by '-'\n");
	// result = ft_split("a-b-c--d", '-');
	// print_split_result(result);
	// printf("Test 4: Splitting \"----\" by '-'\n");
	// result = ft_split("----", '-');
	// print_split_result(result);
	// printf("Test 5: Splitting an empty string \"\" by ','\n");
	// result = ft_split("", ',');
	// print_split_result(result);
	// printf("Test 6: Splitting \"hello\" by 'x'\n");
	// result = ft_split("hello", 'x');
	// print_split_result(result);
	// printf("\n");

	// printf("ft_itoa\n");
	// int		itoa_n1 = 102342;
	// char	*itoa_s1 = ft_itoa(itoa_n1);
	// int		itoa_n2 = -65;
	// char	*itoa_s2 = ft_itoa(itoa_n2);
	// int		itoa_n3 = -2147483648;
	// char	*itoa_s3 = ft_itoa(itoa_n3);
	// int		itoa_n4 = 2147483647;
	// char	*itoa_s4 = ft_itoa(itoa_n4);
	// int		itoa_n5 = -0;
	// char	*itoa_s5 = ft_itoa(itoa_n5);
	// printf("%d -> %s\n", itoa_n1, itoa_s1);
	// printf("%d -> %s\n", itoa_n2, itoa_s2);
	// printf("%d -> %s\n", itoa_n3, itoa_s3);
	// printf("%d -> %s\n", itoa_n4, itoa_s4);
	// printf("%d -> %s\n", itoa_n5, itoa_s5);
	// free(itoa_s1);
	// free(itoa_s2);
	// free(itoa_s3);
	// free(itoa_s4);
	// free(itoa_s5);
	// printf("\n");

	printf("ft_strmapi\n");
	char *strm_s1 = "hello_world";
	char *strm_s2 = "quick brown fox jumps";
	test_ft_strmapi(strm_s1, to_upper_if_even);
	test_ft_strmapi(strm_s2, shift_char);
	test_ft_strmapi("", to_upper_if_even);
	test_ft_strmapi(NULL, to_upper_if_even);
	printf("\n");

	printf("ft_striteri\n");
	char striteri_s1[] = "hello_world";
	char striteri_s2[] = "quick brown fox jumps";
	char striteri_s3[] = "";
	test_ft_striteri(striteri_s1, c_to_upper_if_even);
	test_ft_striteri(striteri_s2, c_shift_char);
	test_ft_striteri(striteri_s3, c_to_upper_if_even);
	test_ft_striteri(NULL, c_to_upper_if_even);
	printf("\n");

	// TURN ON FOR LEAKS TEST
	//while(1);

	return (0);
}
