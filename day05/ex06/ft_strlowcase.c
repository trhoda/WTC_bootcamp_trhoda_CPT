/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 10:37:15 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/23 11:04:45 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strlowcase(char *str);

int main()
{
	char str[10] = "HellOworl";
	char *x;
	x = ft_strlowcase(str);
	write(1, x, 10);
	return 0;
}

char *ft_strlowcase(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] -= ('A' - 'a');
		}
		i++;
	}
	return str;
}
