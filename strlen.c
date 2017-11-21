/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivolosci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 19:16:50 by ivolosci          #+#    #+#             */
/*   Updated: 2017/11/21 19:16:51 by ivolosci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return i;
}

int main(void)
{
	char str[100] = "-1";
	printf("ft_strlen: %lu\n", ft_strlen(str));
	printf("ft_strlen: %lu\n",    strlen(str));
	return 0;
}
