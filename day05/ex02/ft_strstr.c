/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 12:44:01 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/24 17:44:23 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find);

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



