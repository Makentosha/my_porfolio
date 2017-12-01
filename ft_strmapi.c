/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivolosci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 21:52:48 by ivolosci          #+#    #+#             */
/*   Updated: 2017/11/29 21:52:50 by ivolosci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*chr;
	int		i;

	if (!s || !f)
		return (NULL);
	i = 0;
	chr = (char*)malloc(ft_strlen(s) + 1);
	if (!chr)
		return (chr);
	while (s[i])
	{
		chr[i] = f(i, s[i]);
		i++;
	}
	chr[i] = '\0';
	return (chr);
}
