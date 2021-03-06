/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 08:20:51 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/25 15:39:25 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c);

int main(int argc, char **argv)
{
	int i;
	int j;
	
	if (!argc) return 0;
	i = argc - 1;
	j = 0;
	while (i > 0)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j++]);
		}
		ft_putchar('\n');
		i--;
	}
	return 0;
}

int ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}
