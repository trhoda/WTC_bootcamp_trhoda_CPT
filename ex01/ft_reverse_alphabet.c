/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_alphabet.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 15:05:39 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/19 15:09:09 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#import <unistd.h>

void ft_reverse_alphabet(void);

int ft_putchar(char c);

int ft_putchar(char c)
{
  write(1, &c, 1);
  return(0);
}

void ft_reverse_alphabet(void) {

	char c;
	c = 'z';
	while (c >= 'a')
	{
		ft_putchar(c--);
	}
	ft_putchar('\n');
}

