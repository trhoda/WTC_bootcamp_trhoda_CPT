/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 14:57:09 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/20 15:26:44 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c);

void ft_putstr(char *str);

int ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

void ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str++);
	}
	ft_putchar('\n');
}
