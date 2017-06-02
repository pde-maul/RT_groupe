/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nterol <nterol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 14:36:58 by nterol            #+#    #+#             */
/*   Updated: 2017/06/02 16:37:35 by pde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rtv1.h"

void				pixel_put_to_image(int color, t_control *e, int x, int y)
{
	char			*data;
	unsigned long	lcolor;
	unsigned char	r;
	unsigned char	g;
	unsigned char	b;

	lcolor = mlx_get_color_value(e->mlx, color);
	data = mlx_get_data_addr(e->img, &e->bpp, &e->size_line, &e->endian);
	r = ((lcolor & 0xFF0000) >> 16);
	g = ((lcolor & 0xFF00) >> 8);
	b = ((lcolor & 0xFF));
	data[x * e->bpp / 8 + y * e->size_line] = b;
	data[x * e->bpp / 8 + 1 + y * e->size_line] = g;
	data[x * e->bpp / 8 + 2 + y * e->size_line] = r;
}
