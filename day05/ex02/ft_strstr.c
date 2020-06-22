/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 12:44:01 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/22 17:30:48 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strstr(char *str, char *to_find);

int main()

{
	char str[11] = "HelloWorld";
	char tf[3] = "Wz";

	char *x;

	x = ft_strstr(str, tf);

	write(1, x, 1);
	return(0);
}




char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0' && j == 0)
	{
		while (str[i+j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] != '\0')
		{
			j = 0;
		}
		i++;
	}
	if (str[i] != '\0')
	{
		--i;
	}
	return &str[i];
}



