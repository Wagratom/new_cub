/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_init_mlx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:35:37 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/05 11:27:19 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub3D.h>

t_bool	init_mlx_or_die(t_data *data)
{
	data->mlx = mlx_init();
	if (data->mlx == NULL)
	{
		die_program_msg("Error: Not init mlx");
		return (FALSE);
	}
	return (TRUE);
}

