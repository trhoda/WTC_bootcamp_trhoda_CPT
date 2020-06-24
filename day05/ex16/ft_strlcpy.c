/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 12:37:31 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/24 17:52:48 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);


unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
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

	return 0;
}

