/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launcher.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nterol <nterol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 18:11:26 by nterol            #+#    #+#             */
/*   Updated: 2017/06/02 18:00:30 by pde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rtv1.h"

void init_env(t_control *uni)
{
	uni->init = mlx_init();
	uni->w = WIDTH;
	uni->h = HEIGHT;
	uni->image = mlx_new_image(uni->init, uni->w, uni->h);
	uni->window = mlx_new_window(uni->init, uni->w, uni->h, "test RTv1");
	// uni->data = mlx_get_data_addr(uni->image, &(uni->bpp), &(uni->size_line),\
	//     &(uni->endian));
	// main 1, tests
	t_sphere	s;
	t_ray		r;
	int			x;
	int			y;
	int			ret_bool;

	s->pos->x = 200;
	s->pos->y = 200;
	s->pos->z = 100;

	s->radius = 100;

	r->dir->x = 0;
	r->dir->y = 0;
	r->dir->z = 1;

	r->start->z = 0;

	y = 0;
	while (y < uni->h)
	{
		r->start->y = y;
		x = 0;
		while (x < uni->w)
		{
			r->start->x = x;
			//pb ave l'intersection 't'
			ret_bool = intersection(&r, &s)
			// trouver commment mettre le put pixel ici
			if (hit != 1)
			{
				pixel_put_to_image(int color, t_control uni, int x, int y)

			}
			else{

			}
		}
		y++;
	}

}

void launcher(t_control *uni)
{
	init_env(uni);

}
