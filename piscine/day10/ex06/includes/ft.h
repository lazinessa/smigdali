/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smigdali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 11:25:42 by smigdali          #+#    #+#             */
/*   Updated: 2020/03/17 11:25:46 by smigdali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>

void		ft_putchar(char c);
void		ft_putnbr(int nb);
int			ft_atoi(char *str);
int			ft_strcmp(char *s1, char *s2);
void		sum(int x, int y);
void		dim(int x, int y);
void		mult(int x, int y);
void		div(int x, int y);
void		mod(int x, int y);
void		do_op(int x, char *z, int y, void (*f[])(int, int));
int			check_it(int c, char **range);

#endif
