/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_end.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 20:48:06 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/08/15 20:48:09 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int		is_end(t_lemin *lem, char *str)
{
	if (!ft_strequ(str, "##end"))
		return (0);
	lem->is_end = 1;
	free(str);
	return (1);
}
