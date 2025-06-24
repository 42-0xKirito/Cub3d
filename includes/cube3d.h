/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube3d.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <engiacom@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 22:09:00 by engiacom          #+#    #+#             */
/*   Updated: 2025/06/24 02:36:59 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <stdio.h>

typedef	struct s_data
{
	struct s_mlx *mlx;
	struct s_player *player;
} t_data;

typedef struct s_mlx
{
	void	*mlx;
	void	*win;
} t_mlx;

typedef	struct	s_player
{
	int	x;
	int	y;

	int xP;
	int yP;
} t_player;

int	main();
int	minimap(char **map, t_mlx *mlx);
int	movements(t_data *data);