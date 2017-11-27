/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivolosci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 21:38:24 by ivolosci          #+#    #+#             */
/*   Updated: 2017/11/27 21:38:26 by ivolosci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char *str2;
	char *str1;
	size_t i;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	if (s1 == s2)
		return 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i <= n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return 0;
}

// int main()
// {
// 	char *s1 = "\x12\xff\x65\x12\xbd\xde\xad";
// 	char *s2 = "\x12\x02";

// 	printf("ft_%d\n", ft_strncmp(s1, s2, 6));
// 	printf("___%d\n",    strncmp(s1, s2, 6));
// 	printf("%d\n", ("\xff" - "\x02"));
// 	return 0;
// }