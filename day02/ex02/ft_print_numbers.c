/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 15:09:40 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/19 15:11:56 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd>

void ft_alphabet(void);

int ft_putchar(char c);

int ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_alphabet(void)
{
	char c;
	c = '0';
	while (c <= '9')
	{
		ft_putchar(c++);
	}
	ft_putchar('\n');
}

