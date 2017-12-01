/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivolosci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 21:33:47 by ivolosci          #+#    #+#             */
/*   Updated: 2017/11/22 21:33:52 by ivolosci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned long int	nb;
	int					sign;

	sign = 1;
	nb = 0;
	while (sign == 1 && (*str == '\r' || *str == '\v' || *str == '\n' ||
			*str == ' ' || *str == '\f' || *str == '\t'))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + (*str - 48);
		str++;
	}
	if (nb > 9223372036854775807 && sign == -1)
		return (0);
	if (nb > 9223372036854775807 && sign == 1)
		return (-1);
	return (nb * sign);
}
