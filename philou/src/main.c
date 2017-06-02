/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-maul <pde-maul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 10:47:26 by pde-maul          #+#    #+#             */
/*   Updated: 2017/05/31 16:19:57 by pde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rt.h"


void		define_cam(t_env *e)
{
	t_point	*cam;

	if (!(e->cam = (t_cam*)malloc(sizeof(t_cam))))
		exit(1);
	e->cam->o = new_point(0, 0, 0);
	//chercher dans parsing
	e->cam->vect = new_point(0, 0, 1);
	e->cam->vr = new_point(e->cam->o->z, 0, -(e->cam->o->x));

	e->cam->vect_hight->x = e->cam->vect->y * e->cam->vr->z - e->cam->vect->z * e->cam->vr->y);
	e->cam->vect_hight->y = e->cam->vect->z * e->cam->vr->x - e->cam->vect->x * e->cam->vr->z);
	e->cam->vect_hight->z = e->cam->vect->x * e->cam->vr->y - e->cam->vect->y * e->cam->vr->x);
	e->cam->vect_hight = new_point(e->cam->vect_hight->x, e->cam->vect_hight->y, e->cam->vect_hight);
	//vector_tools
	// e->cam->right_left = new_point(x, y, z);


}
//
// typedef struct	s_cam
// {
// 	t_point		vect;
// 	t_point		vr;
// 	t_point		vect_hight;
// 	t_point		right_left;
// 	t_point		o
// 	// a verifier??
// }				t_cam;

int			main(int ac, char **av)
{
	t_env	*e;

	if (!(e = (t_env*)malloc(sizeof(t_env))))
		exit(1);
	e->mlx = mlx_init();
	e->win = mlx_new_window(e->mlx, e->width, e->height, "RT");
	define_cam(e);
	mlx_hook(e->win, 2, (1L << 0), key_press, e);
	mlx_hook(e->win, 17, (1L << 17), clean_exit, e);
	mlx_loop(e->mlx);
	return (0);
}
