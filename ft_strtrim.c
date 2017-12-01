/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivolosci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 19:57:43 by ivolosci          #+#    #+#             */
/*   Updated: 2017/12/01 19:57:44 by ivolosci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		start;
	int		len;

	if (!s)
		return (NULL);
	if (!*s)
		return (ft_strnew(0));

	start = 0;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;

	len = ft_strlen(s) - 1;
	if (start == len + 1)
		return (ft_strnew(0));
	if (start == len + 1)
		return (NULL);
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
		len--;

	len = len - start + 1;
	return ((char *)ft_strsub(s, start, len));
}
