/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivolosci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 21:38:24 by ivolosci          #+#    #+#             */
/*   Updated: 2017/11/27 21:38:26 by ivolosci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && (*s1 == *s2) && (n != 0))
	{
		s1++;
		s2++;
		n--;
	}
	if (n != 0)
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	return (0);
}
