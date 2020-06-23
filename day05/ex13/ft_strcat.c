/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 13:17:52 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/23 13:51:02 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main()
{
	char dest[12] = "Hello ";
	char src[5] = "World";
	char *x;
	x = ft_strcat(dest, src);
	printf("%s\n", dest);
	return 0;
}


char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;
	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return dest;
}

