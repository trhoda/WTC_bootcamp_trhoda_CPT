/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boolean.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 15:42:15 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/26 15:42:18 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

#include <unistd.h>
#define  SUCCESS 0
#define  TRUE 1
#define  FALSE 0
#define  EVEN_MSG "I have an even number of arguments.\n"
#define  ODD_MSG "I have an odd number of arguments.\n"
#define  EVEN(n) (n % 2 == 0)

typedef int		t_bool;

#endif
