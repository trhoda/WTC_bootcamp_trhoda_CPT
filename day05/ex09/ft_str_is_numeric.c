/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:53:37 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/23 13:02:54 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str);

int main()
{
	char str[12] = "2351555555";
	int i;
	i = ft_str_is_numeric(str);
	printf("%d\n", i);
	return 0;
}

int ft_str_is_numeric(char *str)
{
	int i;
	i = 0;
	char c;

	while (str[i] != '\0')
	{
		c = str[i++];
		if (c < '0' || c > '9')
		{
			return 0;
		}
	}
	return 1;
}
