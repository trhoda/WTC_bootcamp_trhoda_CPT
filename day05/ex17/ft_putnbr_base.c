/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 07:57:07 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/24 17:53:40 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putnbr_base(int nb, char *base);

int ft_putchar(char c);

int ft_putnbr_base(int nb, char *base)
{

	int l;
	int i;
	int j;
	int d;
	char num[7000];
	i = 0;
	j = 0;
	l = 0;

	if (!base) return 0;

	while (base[l] != '\0')
	{
		l++;
	}
	printf("len is %d\n", l);

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

	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}

	i = 0;
	while (nb >= l)
	{
		d = base[nb % l];
		num[i++] = d;
		nb /= l;
	}
	d = base[nb % l];
	num[i] = d;


	while (i >= 0)
	{
		ft_putchar(num[i--]);
	}
	return nb;
}
