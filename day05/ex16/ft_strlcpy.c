/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 12:37:31 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/23 15:10:46 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

char *ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	char dest[2];
	char t[2];
	char src[13] = "ijk123456789";
	char *x;
	int len = 2;
	strlcpy(t, src, len);
	x = ft_strlcpy(dest, src, 2);
	printf("%s\n", dest);
	printf("%s\n", t);
	return 0;
}

char *ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	while (src[i] != '\0' && i < size-1)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i++] = '\0';
	}

	return dest;
}

