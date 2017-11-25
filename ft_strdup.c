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

#include "libft.h"
#include <stdlib.h>

char *	ft_strdup(const char *s1)
{
	int i;
	char *str;

	i = 0;
	while (s1[i])
		i++;
	str = (char *)malloc(i * sizeof(char) + 1);
	if (str == NULL)
		return str;
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = s1[i];
	return str;
}