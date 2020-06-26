/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_table.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 15:32:56 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/26 16:06:14 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int ft_putchar(char c);
void ft_putstr(char c);
void ft_print_words_table(char **tab);


void ft_putstr(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0') ft_putchar(str[i++]);
}

void ft_print_words_table(char **tab)
{
    while (*tab != 0)
    {
        ft_putstr(*tab);
        ft_putchar('\n');
        res++;
    }
}

