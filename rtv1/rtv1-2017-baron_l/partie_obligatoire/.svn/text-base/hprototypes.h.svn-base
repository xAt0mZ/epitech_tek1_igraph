/*
** hprototypes.h for rtv1 in /home/baron_l//local/rendu/projets/igraph/rtv1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Mar  6 15:03:20 2013 louis-philippe baron
** Last update Sat Mar 16 19:47:13 2013 louis-philippe baron
*/

#ifndef	PROTOTYPES_H_
#define	PROTOTYPES_H_

/*
** basics
*/
void		my_putchar(char);
int		my_putstr(char *);
int		my_strlen(char *);
int		my_getnbr(char *, int, int);
int		my_getnbr_base(char *, char *);
int		my_puterror(char *, int);

/*
** management (exposehook / keyhook)
*/
int		manage_expose(t_mlx *);
int		manage_key(int, t_all *);

/*
** prototypes for intersections calc
*/
int		calc_sphere(t_pos *, t_pos *, t_item *);
int		calc_plan(t_pos *, t_pos *, t_item *);
int		calc_cylinder(t_pos *, t_pos *, t_item *);
int		calc_cone(t_pos *, t_pos *, t_item *);

/*
** prototypes for normals calc
*/
int		normal_sphere(t_pos *, t_all *, t_item *);
int		normal_plan(t_pos *, t_all *, t_item *);
int		normal_cylinder(t_pos *, t_all *, t_item *);
int		normal_cone(t_pos *, t_all *, t_item *);

/*
** inits (mlx / maths)
*/
int		init(t_mlx *);
int		init_win(t_mlx *);
float		*init_cos();
float		*init_sin();

/*
** parsing / skull
*/
int		rtv1(char *, t_mlx *, t_res *, t_all *);
t_item		*get_file(char **);
char		**check_file(char *);
int		rev_item(t_item **);

/*
** check validity
*/
int		check_len(char **);
int		check_header(char **);
int		check_eye(char **);
int		check_lights(char **);
int		check_items(char **);
int		check_type(char *, int *);
int		check_position(char *, int *);
int		check_rotation(char *, int *);
int		check_color(char *, int *);
int		check_carac(char *, int *);

/*
** color / lights
*/
float		*get_light_tab(t_all *, t_item *);
float		choose_k(float, float);
int		get_color(t_pos *, t_pos *, t_all *);
int		light(t_pos *, t_pos *, t_all *);
int		mppti(int, int, t_mlx *, int);
int		shadings(t_pos *, t_pos *, t_all *);

/*
** rotations / translations
*/
int		eye_rotation(t_pos *, t_pos *, t_item *, t_maths *);
int		vision_rotation(t_pos *, t_pos *, t_item *, t_maths *);
int		normal_rotation(t_pos *, t_pos *, t_item *, t_maths *);

/*
** fill vision / eye structs
*/
int		fill_vision(float, float, t_pos *);
int		fill_eye(t_pos *, t_item *);

/*
** others
*/
int		free_item(t_item *);
int		free_wordtab(char **);
int		find_color(int, int, t_all *);

#endif
