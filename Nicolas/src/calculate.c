/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nterol <nterol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 17:36:35 by nterol            #+#    #+#             */
/*   Updated: 2017/05/29 17:37:42 by nterol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rtv1.h"

t_vector  vectorScale(float c, t_vector *v)
{
  t_vector result;

  result  = {v->x * c, v->y * c, v->z * c};
  return (result);
}

t_vector  vectorAdd(t_vector v1, t_vector v2)
{
  t_vector  result;

  result = {v1->x + v2->x, v1->y + v2->y, v1->z + v2->z};
  return (result);
}

float  vectorDot(t_vector *v1, t_vector *v2)
{
  return ((v1->x * v2->x) + (v1->y * v2->y) + (v1->z * v2->z));
}

t_vector  vectorSub(t_vector *v1, t_vector *v2)
{
  t_vector result;

  result = {v1->x - v2->x, v1->y - v2->y, v1->z - v2->z};
  return (result);
}
