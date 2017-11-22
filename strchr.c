/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivolosci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 20:18:04 by ivolosci          #+#    #+#             */
/*   Updated: 2017/11/22 20:18:11 by ivolosci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *	ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return (NULL);
}

int main(void)
{
	char str[] = "1234567890";

	printf("ft_strchr: %s\n", ft_strchr(str, '0'));
	printf("   strchr: %s\n", strchr(str, '0'));
	return 0;
}
