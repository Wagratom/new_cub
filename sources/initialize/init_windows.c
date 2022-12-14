/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_windows.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:04:05 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/05 13:15:18 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub3D.h>

static t_bool	init_windows(t_data *data)
{
	data->win = mlx_new_window(data->mlx, 1000, 1000, "Cub3D");
	if (data->win == NULL)
	{
		printf("Erro creat windows"); //die
		return (FALSE);
	}
	return (TRUE);
}

t_bool	init_windows_or_die(t_data *data)
{
	if (data->mlx == NULL)
	{
		printf("Not creat windows, mlx pointer null"); //die
		return (FALSE);
	}
	return (init_windows(data));
}
