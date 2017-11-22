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

char *	ft_strrchr(const char *s, int c)
{
	while(*s)
		s++;
	if (c == '\0')
		return ((char *)s);
	s--;
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}

int main(void)
{
	char str[] = "1234567390";

	printf("ft_strrchr: %s\n", ft_strrchr(str, '1'));
	printf("   strrchr: %s\n", strrchr(str, '1'));
	return 0;
}
