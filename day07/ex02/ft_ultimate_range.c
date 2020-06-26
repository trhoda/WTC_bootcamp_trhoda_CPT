/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 16:16:20 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/26 15:59:58 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int len;
	int *table;
				
	if (max < min)
	{
		*range = NULL;
		return 0;
	}
	len = max - min;
	table = (int *)malloc(len*sizeof(int*));

	i = 0;
	while (min < max) table[i++] = min++;
	*range = table;
	return i;
}
