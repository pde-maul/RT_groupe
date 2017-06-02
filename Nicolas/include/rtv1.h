/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rtv1.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nterol <nterol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 19:04:15 by nterol            #+#    #+#             */
/*   Updated: 2017/06/02 16:03:24 by pde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RTV1_H
# define RTV1_H
# include "../lib/libft/libft.h"
# include "../lib/minilibx_macos/mlx.h"

# define WIDTH 800
# define HEIGHT 800

typedef struct		s_vector {
	float			x;
	float			y;
	float			z;
}					t_vector;

typedef struct		s_sphere {
	t_vector			pos;
	float			radius;
	int				material;
}					t_sphere;

typedef struct		s_ray {
	t_vector			start;
	t_vector			dir;
}					t_ray;

typedef struct		s_color {
	unsigned char	b;
	unsigned char	g;
	unsigned char	r;
	unsigned char	a;
}					t_color;

typedef struct		s_light {
	t_vector			pos;
	t_color			intensity;
}					t_light;

typedef struct		s_material {
	t_color			diffuse;
	float			reflection;
}					t_material;

typedef struct		s_inter {
	float			a;
	float			b;
	float			c;
	float			discr;
	float			sqd;
	float			t1;
	float			t0;
	t_vector				dist;
}					t_inter;

typedef struct		s_control {
	int				bpp;
	int				size_line;
	int				endian;
	void			*window;
	void			*init;
	void			*image;
	char			*data;
	int				set;
	int				w;
	int				h;
	t_vector			v;
	t_sphere			s;
	t_color			brush[WIDTH * HEIGHT * 3];
	t_light			lux;
}					t_control;

int					main(int ac, char **av);
void				clean(t_control *e);
void 				clean_exit(t_control *e);
int					key_press(int key, t_control *uni);
void				init_env(t_control *uni);
int					intersection(t_ray *r, t_sphere *s, float *t);
void				launcher(t_control *uni);

t_vector			vectorScale(float c, t_vector *v);
t_vector			vectorAdd(t_vector v1, t_vector v2);
float 				vectorDot(t_vector *v1, t_vector *v2);
t_vector			vectorSub(t_vector *v1, t_vector *v2);

int					color_set(t_control *uni);


#endif
