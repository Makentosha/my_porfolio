/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivolosci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 18:36:18 by ivolosci          #+#    #+#             */
/*   Updated: 2017/11/29 18:36:26 by ivolosci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void * ft_memalloc(size_t size)
{
	void *chr;

	chr = malloc(size);
	if (!chr)
		return NULL;
	ft_memset(chr, '\0', size);
	return (chr);
}
