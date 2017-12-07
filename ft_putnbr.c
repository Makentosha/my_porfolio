/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivolosci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 18:45:02 by ivolosci          #+#    #+#             */
/*   Updated: 2017/12/03 18:45:03 by ivolosci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lim(int n)
{
	if (n < 0)
		ft_putchar('-');
	if (n == -2147483648)
	{
		ft_putstr("2147483648");
		return (1);
	}
	if (n == 2147483647)
	{
		ft_putstr("2147483647");
		return (1);
	}
	return (0);
}

void	ft_putnbr(int n)
{
	int	nb;
	int sub;

	if (ft_lim(n))
		return ;
	nb = 0;
	if (!(n % 10))
		sub = 4;
	while (n >= 10)
	{
		nb = (nb * 10) + (n % 10);
		n /= 10;
	}
	ft_putchar((char)(n + 48));
	while (nb != 0)
	{
		ft_putchar((char)((nb % 10) + 48));
		nb /= 10;
	}
	if (sub == 4)
		ft_putchar('0');
}
