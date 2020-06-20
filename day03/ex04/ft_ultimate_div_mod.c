/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 14:49:41 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/20 14:56:09 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_ultimate_div_mod(int *a, int *b);

void ft_ultimate_div_mod(int *a, int *b)
{
	int tmp_a;
	int tmp_b;

	tmp_a = *a;
	tmp_b = *b;

	*a = tmp_a / tmp_b;
	*b = tmp_a % tmp_b;
}

