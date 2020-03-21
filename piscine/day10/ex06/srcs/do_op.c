/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smigdali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 22:22:15 by smigdali          #+#    #+#             */
/*   Updated: 2020/03/16 22:22:17 by smigdali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void		do_op(int x, char *z, int y, void (*f[])(int, int))
{
	if (!ft_strcmp(z, "+"))
        return (f[0](x, y));
	if (!ft_strcmp(z, "-"))
        return (f[1](x, y));
    if (!ft_strcmp(z, "*"))
        return (f[2](x, y));
    if (!ft_strcmp(z, "/"))
        return (f[3](x, y));
    if (!ft_strcmp(z, "%"))
        return (f[4](x, y));
}
