/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 09:56:38 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/25 11:49:17 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strcmp(char *s1, char *s2);

int ft_putchar(char c);

int ft_pustr(char *str);

int ft_strcmp(char *s1, char *s2)
{
	int i;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i]) i++;
		if (s1[i] != s2[i]) return (s1[i] - s2[i]);
	}
	return 0;
}

int ft_putstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i++]);
	}
	return 0;
}

int ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}

int main(int argc, char **argv)
{
	int i;
	char *tmp;

   	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i+1]) > 0)
		{
			tmp = argv[i];
			argv[i] = argv[i+1];
			argv[i+1] = tmp;
			i = 1;
		}
		else
		{
			i++;
		}

	}

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
	
	return 0;
}
