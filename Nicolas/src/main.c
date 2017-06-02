/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nterol <nterol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 17:12:56 by nterol            #+#    #+#             */
/*   Updated: 2017/05/27 14:56:52 by nterol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rtv1.h"

int     main(int ac, char **av)
{
  control *uni;

  uni = (control *)malloc(sizeof(control));
  if (!(uni))
    error();
  launcher(uni);
  return (0);
}
