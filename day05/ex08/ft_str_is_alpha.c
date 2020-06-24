/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:53:37 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/24 17:48:41 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_alpha(char *str);

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
	}
	return 1;
}
