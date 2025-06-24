/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_hotkey.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <engiacom@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 23:17:57 by engiacom          #+#    #+#             */
/*   Updated: 2025/06/24 02:11:36 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cube3d.h"

int	go_up(t_data *data)
{
	printf("GG\n");
}

int	handle_keypress(int keycode, t_data *data)
{
	if (keycode == 13)
		go_up(data);
	// else if (keycode == 1)
	// 	//go_down(mlx);
	// else if (keycode == 0)
	// 	//go_left(mlx);
	// else if (keycode == 2)
	// 	//go_right(mlx);
}

int	movements(t_data *data)
{
	mlx_hook(data->mlx->mlx, 2, 1L << 0, handle_keypress, data);
}
