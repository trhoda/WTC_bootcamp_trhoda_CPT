/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 08:36:03 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/24 17:54:18 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi_base(char *str, char *base);

int ft_atoi_base(char *str, char *base)
{

	int l;
	int i;
	int neg;
	int j;
	char d;
	int sum;
	i = 0;
	j = 0;
	l  = 0;
	sum = 0;
	neg = 1;

	if (!base) return 0;
	if (!str) return 0;

	while (base[l] != '\0')
	{
		l++;
	}

	if (l < 2) return 0;

	while (i < l)
	{
		j = 0;
		if (base[i] < 32 || base[i] > 126 || base[i] == '-' || base[i] == '+') return 0;
		while (j < l)
		{
			if (i != j)
			{
				if (base[i] == base[j]) return 0;
			}
			j++;
		}
		i++;
	}

	if (str[0] == '-')
	{
		neg = -1;
		str++;
	}

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (base[j] != str[i])
		{
			j++;
		}
		if (i != 0)
		{
			sum *= 10;
		}
		if (j == l) return 0;	/* not in base*/
		sum	+= j;
		i++;	
	}
	return sum*neg;
}
