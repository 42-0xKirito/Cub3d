/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <engiacom@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 02:16:22 by nitadros          #+#    #+#             */
/*   Updated: 2025/09/29 19:01:25 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H
# include <stdio.h>
# include "../libft/includes/libft.h"
# include "libs/get_next_line.h"
# include "libs/get_next_line_bonus.h"
# include "libs/mlx.h"
# include "init.h"
# include "map.h"
# include "player.h"
# include "movements.h"
# include "free.h"
# include "raycast.h"
# include "math.h"
# include "minimap.h"

typedef struct s_mlx
{
	void	*mlx;
	void	*win;
	int		width;
	int		height;
}	t_mlx;

typedef struct s_data
{
	t_map		map;
	t_mlx		mlx;
	t_player	player;
	t_raycast	raycast;
	t_move		move;
	t_mouse		mouse;
	t_minivar	minivar;
	int			scale;
}	t_data;

int	ft_exit(char *error, t_data *d, int free, int all);

#endif
