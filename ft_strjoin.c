/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivolosci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 17:45:41 by ivolosci          #+#    #+#             */
/*   Updated: 2017/12/01 17:45:44 by ivolosci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	int i;
	int y;

	if (!s1 || !s2)
		return NULL;

	str = (char *)malloc(sizeof(char) * 
		(ft_strlen((char*)s1) + ft_strlen((char*)s2)));
	if (!str)
		return NULL;
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	str[ft_strlen(str)] = '\0';
	return (str);
}