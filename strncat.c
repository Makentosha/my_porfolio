/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivolosci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 21:24:30 by ivolosci          #+#    #+#             */
/*   Updated: 2017/11/21 21:24:32 by ivolosci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *	ft_strncat(char *s1, const char *s2, size_t n)
{
	int i;
	size_t y;

	i = 0;
	y = 0;

	while(s1[i])
		i++;
	
	while(y < n)
	{
		s1[i] = s2[y];
		i++;
		y++;
	}
	s1[i] = '\0';
	return (s1);
}

int main(void)
{
	char str1[15] = "123456";
	char str2[] = "7890";
	char str3[15] = "123456";
	char str4[] = "7890";

	printf("%s\n", ft_strncat(str1, str2, 2));
	printf("%s\n", strncat(str3, str4, 2));

	return 0;
}
