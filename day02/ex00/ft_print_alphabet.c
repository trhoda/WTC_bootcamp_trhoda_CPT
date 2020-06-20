/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alphabet.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 15:53:11 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/19 15:56:52 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void);

int ft_putchar(char c);

int ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

void ft_print_alphabet(void)
{
	char c;
	c = 'a';
	while (c <= 'z')
	{
		ft_putchar(c++);
	}
	ft_putchar('\n');
}

