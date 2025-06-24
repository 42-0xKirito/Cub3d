/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <engiacom@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 22:46:34 by engiacom          #+#    #+#             */
/*   Updated: 2025/06/24 02:28:10 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cube3d.h"

int	minimap(char **map, t_mlx *mlx)
{
	int	x;
	int	y;
	int	x_pix;
	int	y_pix;
	int	size = 10; // taille d'une case en pixels

	x = 0;
	while (map[x])
	{
		y = 0;
		while (map[x][y])
		{
			// Dessiner d'abord un fond blanc pour chaque case
			x_pix = 0;
			while (x_pix < size)
			{
				y_pix = 0;
				while (y_pix < size)
				{
					mlx_pixel_put(mlx->mlx, mlx->win,
						y * size + y_pix, x * size + x_pix, 0x00FFFFFF); // fond blanc
					y_pix++;
				}
				x_pix++;
			}

			// Dessiner par-dessus si nécessaire
			if (map[x][y] == '1') // mur
			{
				x_pix = 0;
				while (x_pix < size)
				{
					y_pix = 0;
					while (y_pix < size)
					{
						mlx_pixel_put(mlx->mlx, mlx->win,
							y * size + y_pix, x * size + x_pix, 0x000000FF); // bleu
						y_pix++;
					}
					x_pix++;
				}
			}
			else if (map[x][y] == 'N' || map[x][y] == 'S'
				|| map[x][y] == 'E' || map[x][y] == 'W') // joueur
			{
				x_pix = 3;
				while (x_pix < 7)
				{
					y_pix = 3;
					while (y_pix < 7)
					{
						mlx_pixel_put(mlx->mlx, mlx->win,
							y * size + y_pix, x * size + x_pix, 0x00FF0000); // rouge
						y_pix++;
					}
					x_pix++;
				}
			}
			y++;
		}
		x++;
	}
	return (0);
}


