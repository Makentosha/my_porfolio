/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivolosci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 21:10:46 by ivolosci          #+#    #+#             */
/*   Updated: 2017/11/22 21:10:48 by ivolosci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int b;
	int l;
	int p;

	if (!little[0])
		return ((char *)big);
	b = 0;
	l = 0;
	while (big[b])
	{
		if (big[b] == little[l])
		{
			p = b;
			while (big[b] == little[l])
			{
				b++;
				l++;
				if (!little[l])
					return ((char *)big + p);
			}
			b = p;
			l = 0;
		}
		b++;
	}
	return (0);
}
