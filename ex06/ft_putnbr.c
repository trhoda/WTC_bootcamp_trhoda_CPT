/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 15:44:10 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/19 15:49:28 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb);
int ft_putchar(char c);

int ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

void ft_putnbr(int nb)
{
	char c;

	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb / 10 != 0)
	{
		ft_putnbr(nb/10);
	}
	c = nb%10 + 48;
	ft_putchar(c);
}

