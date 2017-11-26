/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivolosci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 17:17:59 by ivolosci          #+#    #+#             */
/*   Updated: 2017/11/26 17:18:01 by ivolosci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (!little[0])
		return ((char *)big);
	int b;
	size_t l;
	int p;

	b = 0;
	l = 0;
	while (big[b])
	{
		if (big[b] == little[l])
		{
			p = b;
			while (big[b] == little[l] && l < len)
			{
				b++;
				l++;
				if (!little[l])
				{
					return ((char *)big + p);
				}
			}
			printf("b:%d\n", b);
			printf("p:%d\n", p);
			b = p;
			l = 0;
		}
		b++;
	}
	return 0;
}

int main()
{
	char *s1 = "MZIRIBMZIRIBMZE123";
	char *s2 = "MZIRIBMZE";
	size_t max = strlen(s2);
	printf("*lu: %lu\n", max );
	char *i1 = strnstr(s1, s2, max);
	char *i2 = ft_strnstr(s1, s2, max);


	printf("___%s\n", i1);
	printf("ft_%s\n", i2);
	return 0;
}