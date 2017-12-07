/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivolosci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 14:47:22 by ivolosci          #+#    #+#             */
/*   Updated: 2017/12/03 14:47:25 by ivolosci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int		ft_calc_len(char *str, int c)
{
	int		i;

	i = 0;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
	}
	return (i + 1);
}

int		ft_first_malloc(char *s, char c)
{
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;

		while (s[i] != c && s[i] != '\0')
			i++;
		len++;
	}
	return (len);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		len;
	int		l;

	l = ft_first_malloc((char *)s, c);
	arr = (char **)malloc(sizeof(char) * ft_first_malloc((char *)s, c) + 1);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		len = ft_calc_len((char *)s, c);
		*arr = (char *)malloc(sizeof(char) * len + 1);
		*arr[len] = '\0';
		memmove(*arr, s, len - 1);
		arr++;
		while (--len)
			s++;
	}
	while (l--)
		arr--;
	return (arr);
}

int main()
{
	char *s = "                  olol    sreg ";
	char **r = ft_strsplit(s, ' ');
	int i = 0;

	while (r[i])
	{
		printf("%s\n", r[i]);
		i++;
	}
	return (0);
}











