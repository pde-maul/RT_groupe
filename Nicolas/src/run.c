/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nterol <nterol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 14:38:21 by nterol            #+#    #+#             */
/*   Updated: 2017/06/01 22:14:20 by nterol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rtv1.h"


int     intersection(ray *r, sphere *s, float *t)
{
  int     indice;
  t_inter cross;

  indice = 1;
  cross->a = vectorDot(&r->dir, &r->dir);
  cross->dist = vectorSub(&r->start, &s->pos);
  cross->b = vectorDot(&r->dir, &dist);
  cross->c = vectorDot(&dist, &dist) - (s->radius * s->radius);
  cross->discr = b * b - 4 * a * c;
  if (cross->discr < 0)
    return (indice);
  else
  {
    cross->sqd = sqrt(cross->discr);
    cross->t0 = ((-(cross->b) + cross->sqd) / 2);
    cross->t1 = ((-(cross->b) - cross->sqd) / 2);
    if (t0 > t1)
      t0 = t1;
    if ((t0 > 0.001f) && (t0 < *t))
    {
      *t = t0;
      indice = 0;
    }
    else
      indice = 1;
  }
  return (indice);
}


  int   color_set(control *uni)
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
