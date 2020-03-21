/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_it.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smigdali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 09:40:18 by smigdali          #+#    #+#             */
/*   Updated: 2020/03/17 09:40:21 by smigdali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		check_it(int c, char **range)
{
	if (c == 4)
	{
		if (ft_strcmp(range[2], "+") && ft_strcmp(range[2], "-") &&
		ft_strcmp(range[2], "*") && ft_strcmp(range[2], "/") &&
		ft_strcmp(range[2], "%"))
			write(1, "0\n", 2);
		else if (ft_atoi(range[3]) == 0 && (!ft_strcmp(range[2], "/")))
			write(2, "Stop : division by zero\n", 24);
		else if (ft_atoi(range[3]) == 0 && (!ft_strcmp(range[2], "%")))
			write(2, "Stop : modulo by zero\n", 22);
		else
			return (0);
	}
	return (1);
}
