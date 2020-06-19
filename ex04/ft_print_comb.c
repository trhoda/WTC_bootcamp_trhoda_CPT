/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 15:15:52 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/19 15:24:29 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_put_char(char c);

void ft_print_comb(void);

int ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

void ft_print_comb()
{
	int i;
	int j;
	int k;
	int b;
	int start;
	char first;
	char second;
	char third;

	i = 0;
	j = 1;
	k = 2;
 	b = 0;
	start = 1;

	while (i <= 7)
	{
		j = start;
		while (j <= 8)
		{
			k = j + 1;
			start = k - 1;
			while (k <= 9)
			{
				if (i != j)
				{
					if (j != k)
					{
						if ((j != k + 1) || b == 0)
						{
							b++;
							first = i + 48;
							second = j + 48;
							third = k + 48;
							ft_putchar(first);
							ft_putchar(second);
							ft_putchar(third);
							if (!(i == 7 && k == 9))
							{
								ft_putchar(',');
							}
						}
					}
				}
				k++;
				start++;
			}
			j++;
		}
		if (j == 9)
		{
			start = i + 1;
		}
		i++;
	}
	ft_putchar('\n');
}

