/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nterol <nterol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 14:38:21 by nterol            #+#    #+#             */
/*   Updated: 2017/06/02 17:02:12 by pde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rtv1.h"


int     intersection(t_ray *r, t_sphere *s, float *t)
{
	// indice est le resultat du booleen
	int     indice;
	t_inter cross;

	indice = 1;
	cross->a = vectorDot(&r->dir, &r->dir);
	cross->dist = vectorSub(&r->start, &s->pos);
	// modif en faisant * 2
	cross->b = 2 * vectorDot(&r->dir, &dist);
	cross->c = vectorDot(&dist, &dist) - (s->radius * s->radius);
	//modif avec les point b  a et c devient cross->b ...
	cross->discr = cross->b * cross->b - 4 * cross->a * cross->c;
	//false = indice = 1
	if (cross->discr < 0)
		return (indice);
	else
	{
	cross->sqd = sqrt(cross->discr);
	cross->t0 = ((-(cross->b) + cross->sqd) / 2);
	cross->t1 = ((-(cross->b) - cross->sqd) / 2);
	//t0 et t1 deviennent cross->t0...
	if (cross->t0 > cross->t1)
		cross->t0 = cross->t1;
	//qu'est ce que 0.001f ?
	if ((cross->t0 > 0.001f) && (cross->t0 < *t))
	{
		*t = cross->t0;
		indice = 0;
	}
	else
		indice = 1;
	}
	return (indice);
}


	int   color_set(t_control *uni)
	{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < uni->w)
	{
		if ((j >= 250 && j < 350) || (i >= 200 && i < 300))
		{
			uni->brush[((j + i) * uni->w) * 3] = 0;
			uni->brush[((j + i) * uni->w) * 3 + 1] = 0;
			uni->brush[((j + i) * uni->w) * 3 + 2] = 128;
		}
		else
		{
			uni->brush[((j + i) * uni->w) * 3] = 255;
			uni->brush[((j + i) * uni->w) * 3 + 1] = 255;
			uni->brush[((j + i) * uni->w) * 3 + 2] = 255;
		}
	}
	}
