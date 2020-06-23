/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 11:56:16 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/23 13:31:56 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strcpy(char *dest, char *src);

void ft_putchar(char n)
{
	write(1, &n, 1);
}

int main()
{
	char d[10];
	int i;
	char c[10] = "HelloWorl";
	ft_strcpy(d, c);
	i = 0;
	while (d[i] != '\0')
	{
		ft_putchar(d[i]);
		i++;
	}
	return 0;
}


char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return dest;
}
