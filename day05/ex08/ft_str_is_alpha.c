/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:53:37 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/23 12:04:27 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str);

int main()
{
	char str[12] = "helloWorld";
	int i;
	i = ft_str_is_alpha(str);
	printf("%d\n", i);
	return 0;
}

int ft_str_is_alpha(char *str)
{
	int i;
	i = 0;
	char c;

	while (str[i] != '\0')
	{
		c = str[i++];
		if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
		{
			return 0;
		}
		//i++;
	}
	return 1;
}
