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

#include <string.h>
#include <stdio.h>

char *	ft_strstr(const char *big, const char *little)
{
	if (!little[0])
		return ((char *)big);
	int b;
	int l;
	int p;

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
	return 0;
}

int main(void)
{
	const char big[] = "56756712345567675556755556890\0009956 78";
	const char little[] = "a\0 6 78";

	printf("ft_strstr: %s\n", ft_strstr(big, little));
	printf("   strstr: %s\n",    strstr(big, little));
	return (0);
}