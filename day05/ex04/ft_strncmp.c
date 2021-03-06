/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 09:58:43 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/24 17:45:35 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n);

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	i = 0;

	while (i < n)
	{
		if (s1[i] == '\0' && s2[i] != '\0') return -1;
		if (s1[i] != '\0' &&  s2[i] == '\0') return 1;
		if (s1[i] > s2[i]) return 1;
		if (s1[i] < s2[i]) return -1;
		i++;
	}
	return 0;
}

