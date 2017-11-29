/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivolosci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 22:23:11 by ivolosci          #+#    #+#             */
/*   Updated: 2017/11/29 22:23:12 by ivolosci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *chr;
	int i;

	i = start;
	if (start > ft_strlen(s) || !len)
		return (NULL);
	chr = (char *)malloc(len + 1);
	if (!chr)
		return (NULL);
	while (--len)
	{
		chr[i] = s[i];
		if(s[i++])
			return (chr);
		len--;
	}
	chr[i] = '\0';
	return (chr);
}
