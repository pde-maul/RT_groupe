/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-maul <pde-maul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 10:45:45 by pde-maul          #+#    #+#             */
/*   Updated: 2017/05/31 16:08:45 by pde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF3D_H
# define WOLF3D_H

# include "../libft/libft.h"
# include "../minilibx_macos/mlx.h"
# include <math.h>
# include <fcntl.h>

typedef struct	s_point
{
	float		x;
	float		y;
	float		z;
}				t_point;

typedef struct	s_ray
{
	t_point		o;
	t_point		d;
	//origin et direction
}				t_ray;

typedef struct	s_cam
{
	t_point		*vect;
	t_point		*vr;
	t_point		*vect_hight;
	t_point		*right_left;
	t_point		*o;
}				t_cam;

typedef	struct	s_img
{
	int			bpp;
	int			endian;
	int			size_line;
	char		*data;
}				t_img;

typedef	struct	s_env
{
	void		*mlx;
	void		*win;
	void		*img;

	t_point		*pos;
	t_cam		*cam;

}				t_env;



#endif
