/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 10:37:15 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/23 11:09:49 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strcapitalize(char *str);

int main()
{
	char str[18] = "tEsts arE lame AF";
	char *x;
	x = ft_strcapitalize(str);
	write(1, x, 18);
	return 0;
}

char *ft_strcapitalize(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || str[i-1] == ' ')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] += ('A' - 'a');
			}
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] -= ('A' - 'a');
			}
		}
		i++;
	}
	return str;
}
