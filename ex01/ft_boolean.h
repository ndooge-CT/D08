/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndooge <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 16:17:57 by ndooge            #+#    #+#             */
/*   Updated: 2020/07/16 16:24:15 by ndooge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

#include <unistd.h>

# define EVEN_MSG		"I have an even number of arguments.\n"
# define ODD_MSG		"I have an odd number of arguments.\n"
# define EVEN(x)		x % 2 == 0
#define SUCCESS			0
#define TRUE 			1
#define FALSE			0

typedef int		t_bool;

#endif
