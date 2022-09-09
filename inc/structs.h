/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <ael-bekk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:01:01 by ael-bekk          #+#    #+#             */
/*   Updated: 2022/09/08 22:33:13 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

/*************************************************************************/
/*========                   needed by parsing                   ========*/
/*************************************************************************/
typedef struct s_map
{
	char			*content;
	struct s_map	*next;
}   t_map;

/*************************************************************************/
/*========                          color                        ========*/
/*************************************************************************/
typedef struct s_rgb
{
	int			r;
	int			g;
	int			b;
}   t_rgb;

/*************************************************************************/
/*========                        game mode                      ========*/
/*************************************************************************/
typedef struct s_img
{
	void		*mlx_img;
	char		*addr;
	int			x;
	int			y;
	int			bpp; /* bits per pixel */
	int			line_len;
	int			endian;
}	t_img;

/************************************************************************/
/*========              player position / direction             ========*/
/************************************************************************/
typedef struct s_dir
{
	double		ph;
	int			px;
	int			py;
	int			s;
	int			x;
	int			y;
	double		angle;
}   t_dir;

/*************************************************************************/
/*========   mlx instance && window instance && character imgs   ========*/
/*************************************************************************/
typedef struct s_mlx
{
	void		*mlx_ptr;
	void		*win_ptr;
	t_img		floor;
	t_img		space;
	t_img		wall;
	void		*none;
	void		*player;
	void		*cadre1;
	void		*cadre2;
}   t_mlx;

/*************************************************************************/
/*========        player objects [weapon / time / health]        ========*/
/*************************************************************************/
typedef struct s_p_objects
{
	int			health;
	int			breath;
	int			t1;
	int			t2;
	int			t3;
	int			t4;
	int			w;
	t_img		time[10];
}	t_p_objects;

/*************************************************************************/
/*========                mouse [events/ position]               ========*/
/*************************************************************************/
typedef struct s_mouse
{
	int			hover;
	int			on_click;
	int			clicked;
	int			show;
	int			x;
	int			y;
	double		on;
	void		*img;
	int			on_clk[7];
	int			on_hov[7];
	int			sett2;
}	t_mouse;

/*************************************************************************/
/*========                      camera vue                       ========*/
/*************************************************************************/
typedef struct s_fov
{
	int			jumping;
	int			crouching;
}	t_fov;

/*************************************************************************/
/*========                      intro imgs                       ========*/
/*************************************************************************/
typedef struct s_intro
{
	int			fov;
	int			map;
	int			up;
	t_img		int1;
	t_img		int2;
	t_img		start;
	t_img		restart;
	t_img		cont;
	t_img		sett;
	t_img		exit;
	t_img		back;
	t_img		reset;
	t_img		gun;
	t_img		tr;
	t_img		tr2;
	t_img		up_logo;
	t_img		down_logo;
	t_img		guide[16];
	void		*keys[1000];
	int			g_k[12];
	int			on_hov[17];
	int			on_clk[17];
	int			volume;
	t_img		vol_icon[3];
	t_img		vol[2];
	int			vol_click;
	int			light;
	t_img		light_icon[2];
	t_img		lgt[2];
	t_img		lt;
	int			lgt_click;
	int			animate_sett;
}	t_intro;

/*************************************************************************/
/*========                         sound                         ========*/
/*************************************************************************/
typedef struct s_sound
{
	int			click;
	int			hover;
	int			scroll;
	int			hit;
	int			breath;
}	t_sound;

/*************************************************************************/
/*========                          door                         ========*/
/*************************************************************************/
typedef struct s_door
{
	int		dor;
	int		op;
	double	cord[2];
	int		is_op;
	int		color[15001][2];
	int		counter;
	char	**map;
	t_img	door[8][2];
	double	rays[15001];
	int		hit_wall;
	int		c;
}	t_door;

/*************************************************************************/
/*========                        angles                         ========*/
/*************************************************************************/
typedef struct s_angle
{
	double		r_cos[15001];
	double		r_sin[15001];
	double		r_res_cos[15001];
	double		cte_tan;
	double		pl_cos;
	double		pl_sin;
	double		pl_cos_plus_90;
	double		pl_sin_plus_90;
}	t_angle;

/*************************************************************************/
/*========                        angles                         ========*/
/*************************************************************************/
typedef struct s_gun
{
	int		f_shoot;
	int		f_reload;
	int		frame;
	int		case_bullet;
	int		bullet;
	t_img	gun[100];
}	t_gun;

/*************************************************************************/
/*========                     global struct                     ========*/
/*************************************************************************/
typedef struct s_data
{
	int			mode;
	int			mv;
	int			g_mv;
	t_img		img_c;
	t_img		assets;
	t_img		guns;
	int			keys[1000];
	int			height;
	int			width;
	int			c;
	int			speed;
	double		rays[15001];
	int			color[15001][2];
	char		**map;
	int			*w_map;
	int			h_map;
	t_mlx		mlx;
	t_rgb		floor;
	t_rgb		ceil;
	t_dir		dir;
	t_img		img;
	t_img		blood_hit;
	t_img		blood_hit2;
	t_p_objects objects;
	t_mouse		mouse;
	t_fov		fov;
	t_intro		intro;
	t_sound		sound;
	t_door		door;
	int			indx;
	int			light;
	double		*cord;
	int			design;
	int			bld;
	t_angle		angles;
	t_gun		gun[27];
	void		*sl;
	t_img		nums[10];
	int			use_gun;
	int			aim;
}   t_data;


#endif