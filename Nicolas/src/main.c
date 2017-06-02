/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nterol <nterol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 17:12:56 by nterol            #+#    #+#             */
/*   Updated: 2017/06/02 16:35:10 by pde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rtv1.h"

int     main(int ac, char **av)
{
	t_control *uni;

	uni = NULL;
	(void)av;
	if (ac < 1)
		return(0);
	// uni = (control *)malloc(sizeof(control));
	// if (!(uni))
	//   error();
	launcher(uni);
	mlx_hook(uni->window, 2, (1L << 0), key_press, uni);
	mlx_hook(uni->window, 17, (1L << 17), clean_exit, uni);
	mlx_loop(uni->init);
return (0);
}
