/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mynew_win.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 19:01:07 by antoda-s          #+#    #+#             */
/*   Updated: 2023/08/24 19:03:55 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"

void	*mlx;
void	*win1;
void	*win2;

int	gere_mouse(int x, int y, int button, void*toto)
{
	printf("Mouse event - new win\n");
	mlx_destroy_window(mlx, win1);
	win1 = mlx_new_window(mlx, random() % 500, random() % 500, "new win");
	mlx_mouse_hook(win1, gere_mouse, 0);
}


int	main(void)
{
	srandom(time(0));
	mlx = mlx_init();
	win1 = mlx_new_window(mlx, 300, 300, "win1");
	win2 = mlx_new_window(mlx, 600, 600, "win2");
	mlx_mouse_hook(win1, gere_mouse, 0);
	mlx_mouse_hook(win2, gere_mouse, 0);
	mlx_loop(mlx);
}
