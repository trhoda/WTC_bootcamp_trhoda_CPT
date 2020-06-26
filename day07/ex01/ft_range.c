/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 15:57:45 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/26 15:59:30 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max);

int *ft_range(int min, int max)
{
	int i;
	int len;
	int *range;
				
	if (max < min) return NULL;
	len = max - min;
	range = (int *)malloc(len*sizeof(int));

	i = 0;
	while (min < max) range[i++] = min++;

	return range;
}
