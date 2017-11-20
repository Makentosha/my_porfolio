/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivolosci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 13:49:40 by ivolosci          #+#    #+#             */
/*   Updated: 2017/11/19 13:49:43 by ivolosci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_memset(void *str, int chr, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		str[i] = chr;
		i++;
	}
}

int		main()
{
	char str[100] = "te";
	int i = -11;
	memset(str, '0', i);
	printf("%s\n", str);
}