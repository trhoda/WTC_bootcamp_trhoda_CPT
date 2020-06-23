/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:53:37 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/23 13:01:08 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main()
{
	char str[12] = "helloWorld";
	int i;
	i = ft_str_is_uppercase(str);
	printf("%d\n", i);
	return 0;
}

int ft_str_is_uppercase(char *str)
{
	int i;
	i = 0;
	char c;

	while (str[i] != '\0')
	{
		c = str[i++];
		if (c < 'A' || c > 'Z')
		{
			return 0;
		}
	}
	return 1;
}
