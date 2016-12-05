/*
** hfunctions.h for wolf3d in /home/baron_l//local/rendu/projets/igraph/wold3D/tp
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Jan  9 15:07:05 2013 louis-philippe baron
** Last update Sun Jan 13 18:46:45 2013 louis-philippe baron
*/

#ifndef	FUNCTIONS_H_
#define FUNCTIONS_H_

int		manage_expose(t_mlx *);
int		manage_key(int, t_all *);

/*
** File: basics.c
*/

int		my_putstr(char *);
int		my_strlen(char *);

/*
** File: calculs.c
*/

float		calc_dist(int x, t_all *, t_mlx *);

/*
** File: check_validity.c
*/

int		check_validity(char **);

/*
** File: draw.c
*/

int		print_sky_and_floor(t_mlx *);
int		draw(t_mlx *, t_all *);

/*
** File: find_wall.c
*/

float		solve_param_eq(t_map *, t_player *, t_maths *, t_mlx *);

/*
** File: freeall.c
*/

int		free_file(char **);

/*
** File: get_file.c
*/

char		**get_entire_file(int, t_map *);

/*
** File: get_next_line.c
*/

char		*get_next_line(const int);

/*
** File: init.c
*/

t_all		*init_all(char *, t_mlx *);

/*
** File: maths.c
*/

float		*init_cos();
float		*init_sin();

/*
** File: mlx_init.c
*/

int		init(t_mlx *);
int		init_img(t_mlx *);

/*
** File: moves.c
*/

void		rotate(t_all *, int);
void		strafe_q(t_all *);
void		strafe_d(t_all *);
void		move_forward(t_all *);
void		move_backward(t_all *);

/*
** File: pixel_put_to_image.c
*/

int		mppti(int, int, t_mlx *, int);

/*
** File: wolf.c
*/

int		wolf(t_mlx *, t_all *);

#endif
