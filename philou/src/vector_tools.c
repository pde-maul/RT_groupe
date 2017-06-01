/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_tools.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-maul <pde-maul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 16:19:03 by pde-maul          #+#    #+#             */
/*   Updated: 2017/05/31 17:38:22 by pde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rt.h"

t_point		add_vector(t_point *vect1, t_point *vect2)
{
	t_point		*vect3;

	if (!(vect3 = (t_point*)malloc(sizeof(t_point))))
		exit(1);
	vect3->x = vect1->x + vect2->x;
	vect3->y = vect1->y + vect2->y;
	return(vect3);
}

t_point		sub_vector(t_point *vect1, t_point *vect2)
{
	t_point		*vect3;

	if (!(vect3 = (t_point*)malloc(sizeof(t_point))))
		exit(1);
	vect3->x = vect1->x - vect2->x;
	vect3->y = vect1->y - vect2->y;
	return(vect3);
}

t_point		prod_vector(t_point *vect1, t_point *vect2)
{
	t_point		*vect3;

	if (!(vect3 = (t_point*)malloc(sizeof(t_point))))
		exit(1);
	vect3->x = vect1->x * vect2->x;
	vect3->y = vect1->y * vect2->y;
	return(vect3);
}

t_point		dot_prod_vector(t_point *vect1, int scal)
{
	t_point		*vect2;

	if (!(vect2 = (t_point*)malloc(sizeof(t_point))))
		exit(1);
	vect2->x = vect1->x * scal;
	vect2->y = vect1->y * scal;
	return(vect2);
}

t_point		norm_vector(t_point *vect1, int len)
{
	t_point		*vect2;

	if (!(vect2 = (t_point*)malloc(sizeof(t_point))))
		exit(1);

	vect2->x = vect1->x / len;
	vect2->y = vect1->y / len;
		return(vect2);
}

int		dir_vect(t_point *vect1, t_point *vect2)
{

}

t_point		opp_vect(t_point *vect1, t_point *vect2)
{
	
}
