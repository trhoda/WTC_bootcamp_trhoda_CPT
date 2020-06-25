/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 16:31:12 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/25 17:43:58 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_concat_param(int argc, char **argv);

int main(int argc, char **argv)
{

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
			concat[index++] = argv[i][j];
		}
		if (index == len-1) concat[index++] = '\n';
		else concat[index] = '\0';
		i++;
	}

	return concat;
}
