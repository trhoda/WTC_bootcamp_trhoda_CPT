/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 15:47:21 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/26 15:59:22 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(char *src);

char *ft_strdup(char *src)
{
	int i;
	char *dest;
	
	i = 0;
	while (src[i++] != '\0');
	--i;

	dest = (char *)malloc(i*sizeof(char));

	while(i >= 0)
	{
		dest[i] = src[i];
		i--;
	}
	return dest;
}
