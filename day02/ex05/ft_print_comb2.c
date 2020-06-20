/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 15:26:49 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/19 15:43:55 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void);

int ft_putchar(char c);

int ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

void ft_print_comb2(void)
{
	int i;
	int j;
	int r;
	i = 0;
	j = 1;

	while (i <= 98)
	{
		while (j <= 99)
		{
			ft_putchar(i / 10 + 48);
			ft_putchar(i % 10 + 48);
			ft_putchar(' ');
			ft_putchar(j / 10 + 48);
			ft_putchar(j % 10 + 48);
			if (!(i == 98 && j == 99))
			{
				ft_putchar(',');
			}
			j++;
		}
		i++;
		r = i;
		j = r + 1;
	}
	ft_putchar('\n');
}

