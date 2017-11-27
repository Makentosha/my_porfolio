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

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (!little[0])
		return ((char *)big);
	size_t b;
	size_t l;
	int p;

	b = 0;
	l = 0;
	while (big[b])
	{
		if (big[b] == little[l])
		{
			p = b;
			while (big[b] == little[l] && l <= len)
			{
				if (!little[l] || b == len)
					return ((char *)big + p);
				b++;
				l++;

			}
				if (!little[l] || b == len)
					return ((char *)big + p);
			b = p;
			l = 0;
		}
		b++;
	}
	return 0;
}



















