/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filter_keyboard.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:34:25 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/13 22:46:21 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub3D.h>

int	filter_keyboard(int key, t_data *data)
{
	// if (key == KEY_ESQ)
		// clear_program(data);
	if (key == KEY_W)
		map_move_up(&data->map, data->map.p_player[P_X], data->map.p_player[P_Y]);
	else if (key == KEY_D)
		map_move_right(&data->map, data->map.p_player[P_X], data->map.p_player[P_Y]);
	else if (key == KEY_S)
		map_move_down(&data->map, data->map.p_player[P_X], data->map.p_player[P_Y]);
	else if (key == KEY_A)
		map_move_left(&data->map, data->map.p_player[P_X], data->map.p_player[P_Y]);
	// else if (key == ARROW_UP)
	// {
	// 	if (data->map->dir[P_Y] - 1 >= 0)
	// 		data->map->dir[P_Y] -= 1;
	// }
	// else if (key == ARROW_RIGHT)
	// 	data->map.dir[P_X] += 1;
	// else if (key == ARROW_DOWN)
	// 	data->map.dir[P_Y] += 1;
	// else if (key == ARROW_LEFT)
	// {
	// 	if (data->map.dir[P_X] - 1 >= 0)
	// 		data->map.dir[P_X] -= 1;
	// }
	draw_map(data);
	draw_map_debug(data->map.map);
	return (0);
}
