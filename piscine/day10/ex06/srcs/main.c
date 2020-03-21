/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smigdali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 10:12:20 by smigdali          #+#    #+#             */
/*   Updated: 2020/03/17 10:12:26 by smigdali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char **argv)
{
	void		(*calculate_it[5])(int, int) = {sum, dim, mult, div, mod};

	if (!check_it(argc, argv))
	{
		do_op(ft_atoi(argv[1]), argv[2], ft_atoi(argv[3]), calculate_it);
		ft_putchar('\n');
	}
	return (0);
}
