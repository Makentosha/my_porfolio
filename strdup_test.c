/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivolosci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 19:29:01 by ivolosci          #+#    #+#             */
/*   Updated: 2017/11/21 19:29:03 by ivolosci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

#include <stdlib.h>

char *	ft_strdup(const char *s1)
{
	int i;
	char *str;

	i = 0;
	while (s1[i])
		i++;
	printf("i: %d\n", i);
	str = (char *)malloc(i * sizeof(char));
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	return str;
}

int main(void)
{
	char src[100] = "duplicate this pice of shit!!!";
	char *s1 = ft_strdup(src);
	char *s2 = strdup(src);
	printf("ft_strdup: %s\n", s1);
	printf("   strdup: %s\n", s2);
}