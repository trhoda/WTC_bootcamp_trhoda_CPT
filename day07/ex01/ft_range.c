/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 15:57:45 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/26 15:35:24 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max);

int main()
{
	int i;
	int j;
	int *r;
	int index = 0;

	i = 3;
	j = 7;
	r = ft_range(i, j);
	while (index < 4)
	{
		printf("%d\n", r[index++]);
	}
	return 0;
}

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
