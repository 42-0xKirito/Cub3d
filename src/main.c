/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <engiacom@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 21:51:28 by engiacom          #+#    #+#             */
/*   Updated: 2025/06/24 02:31:54 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/cube3d.h"
#include <mlx.h>

int	main()
{
	t_data data;
	t_mlx mlx;
	t_player player;
	
	player.x = 1;
	player.y = 1;
	player.xP = 10;
	player.yP = 10;
	mlx.mlx = mlx_init();
	mlx.win = mlx_new_window(mlx.mlx, 500, 500, "test");
	char **map = (char *[]){
	"11111111111111111111",
	"1N000000000000000001",
	"10111110000001111001",
	"10000010000001000001",
	"10000011111001100001",
	"10110000000000011101",
	"10010001111000100001",
	"10110100001000101101",
	"10000100000001000001",
	"11111111111111111111",
	NULL
};

	data.mlx = &mlx;
	data.player = &player;

	int w;
	int h;
	void *perso = mlx_xpm_file_to_image(mlx.mlx, "textures/player.xpm", &w, &h);
	// minimap(map, &mlx);
	// movements(&data);
	mlx_put_image_to_window(mlx.mlx, mlx.win, perso, 10, 10);
	mlx_loop(mlx.mlx);
	printf("GG\n");
}
