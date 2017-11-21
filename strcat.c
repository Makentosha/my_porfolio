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

char *	ft_strcat(char *s1, const char *s2)
{
	int i;
	int y;

	i = 0;
	y = 0;

	while(s1[i])
		i++;
	
	while(s2[y])
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
	char str1[100] = "123456";
	char str2[100] = "7890";

	ft_strcat(str1, str2);
	printf("%s\n", str1);
	return 0;
}
