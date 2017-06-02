/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-maul <pde-maul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 15:40:04 by pde-maul          #+#    #+#             */
/*   Updated: 2017/06/02 16:00:26 by pde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rtv1.h"

int				key_press(int key, t_control *uni)
{
	if (key == 53)
	{
		clean(uni);
		exit(0);
	}
	return (0);
}

void			clean(t_control *e)
{
	(e->image != NULL) ? mlx_destroy_image(e->init, e->image) : 0;
	(e->window != NULL) ? mlx_destroy_window(e->init, e->window) : 0;
}

void 			clean_exit(t_control *e)
{
	clean(e);
	exit(0);
}
