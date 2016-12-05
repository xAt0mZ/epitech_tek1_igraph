/*
** hfunctions.h for wolf3d in /home/baron_l//local/rendu/projets/igraph/wold3D/tp
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Jan  9 15:07:05 2013 louis-philippe baron
** Last update Wed Jan  9 15:10:05 2013 louis-philippe baron
*/

#ifndef	FUNCTIONS_H_
#define FUNCTIONS_H_

/*
** File: basics.c
*/

int		my_putstr(char *);
int		my_strlen(char *);

/*
** File: calculs.c
*/

double		calc_dist(int x, t_all *, t_mlx *);

/*
** File: draw.c
*/

int		print_sky_and_floor(t_mlx *);
int		draw(t_mlx *, t_all *);

/*
** File: find_wall.c
*/

double		solve_param_eq(t_map *, t_player *, t_maths *);

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

double		*init_cos();
double		*init_sin();

/*
** File: mlx_init.c
*/

int		init(t_mlx *);
int		init_img(t_mlx *);

/*
** File: pixel_put_to_image.c
*/

int		mppti(int, int, t_mlx *, int);

/*
** File: wolf.c
*/

int		wolf(t_mlx *, char *);

#endif
