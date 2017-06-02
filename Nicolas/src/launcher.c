/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launcher.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nterol <nterol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 18:11:26 by nterol            #+#    #+#             */
/*   Updated: 2017/05/27 14:36:21 by nterol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rtv1.h"

void init_env(control *uni)
{
  uni->init = mlx_init();
  uni->w = WIDTH;
  uni->h = HEIGHT;
  uni->image = mlx_new_image(uni->init, uni->w, uni->h);
  uni->window = mlx_new_window(uni->init, uni->w, uni->h);
  uni->data = mlx_get_data_addr(uni->image, &(uni->bpp), &(uni->size_line),\
      &(uni->endian));
}

void launcher(control *uni)
{
  init_env(uni);
}
