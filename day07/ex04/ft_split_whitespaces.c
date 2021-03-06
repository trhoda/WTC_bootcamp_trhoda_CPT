/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 15:33:09 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/26 16:04:57 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
int ft_putchar(char c);
void ft_putstr(char *str)
int	ft_word_len(int index, char *str)
int	ft_word_count(char *str)
char **ft_split_whitespaces(char *str)


void ft_putstr(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0') ft_putchar(str[i++]);
}

int	ft_word_len(int index, char *str)
{
	int		i;

	i = index;
	while (!(str[index] == '\n' ||  str[index] == '\t' || str[index] == ' ' || str[index] == '\0'))
	{
		index++;
	}
	return (index - i);
}

int	ft_word_count(char *str)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (str[i])
	{
      if (str[i] == '\n' ||  str[i] == '\t' || str[i] == ' ' || str[i] == '\0') {
          count++;
      }
		i++;
	}
	return (count + 1);
}

char **ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i;
	int		j;
	int		k;
  	int len;

	i = 0;
	j = 0;
	tab = malloc(ft_word_count(str));
	while (str[j])
	{
		k = 1;
		while (str[j] == '\n' ||  str[j] == '\t' || str[j] == ' ' || str[j] == '\0') j++;
    	len = ft_word_len(j, str);
		*(tab + i) = (char *)malloc((len + 1) * sizeof(char));
		while (!(str[j] == '\n' ||  str[j] == '\t' || str[j] == ' ' || str[j] == '\0'))
		{
			tab[i][k - 1] = str[j++];
			k++;
		}
		tab[i++][k - 1] = '\0';
	}
	tab[i] = 0;
	return (&tab[0]);
}

