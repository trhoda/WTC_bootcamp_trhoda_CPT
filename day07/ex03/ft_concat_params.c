/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 15:34:27 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/26 15:34:44 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 16:31:12 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/26 15:30:02 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char *ft_concat_param(int argc, char **argv);

int ft_putchar(char c);

int ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}

int main(int argc, char **argv)
{
	char *dest;
	int i;

	i = 0;
	dest = ft_concat_param(argc, argv);

	while (dest[i] != '\0')
	{
		ft_putchar(dest[i++]);
	}
	return 0;
}

char *ft_concat_param(int argc, char **argv)
{
	int i;
	int j;
	int len;
	int index;
	char *concat;

	i = 1;
	len = 1;

	while (i < argc)
	{
		j = -1;
		while (argv[i][++j] != '\0');
		len += j;
		i++;
	}

	concat = (char*)malloc(len*sizeof(char));

	i = 1;
	index = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			concat[index++] = argv[i][j++];
		}
		if (index == len-1) concat[index++] = '\0';
		else concat[index++] = '\n';
		i++;
	}

	return concat;
}
