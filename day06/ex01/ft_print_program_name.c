/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 08:14:47 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/25 08:20:14 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c);

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (!argc) return 0;

	while (argv[0][i] != '\0')
	{
		ft_putchar(argv[0][i++]);
	}
	ft_putchar('\n');
	return 0;
}

int ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}
