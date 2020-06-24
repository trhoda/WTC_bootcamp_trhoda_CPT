/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 10:37:15 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/24 17:47:43 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcapitalize(char *str);

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
