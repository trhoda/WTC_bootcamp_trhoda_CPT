/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 15:40:28 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/20 16:29:22 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrev(char *str);

char *ft_strrev(char *str)
{
	int count;
	int i;
	i = 0;
	count = 0;

	while (*(str + count) != '\0')
	{
		count++;
	}
	count--;
	while (i < count)
	{
		c = *(str+i);
		*(str+i) = *(str+count);
		*(str+count) = c;
		i++;
		count--;
	}
	return str;
}
