/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:30:29 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/01 13:46:45 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <cub3D.h>

t_bool	open_file(t_map *data)
{
	int	fd;

	data->fd = open(data->file_name, O_RDONLY);
	if (data->fd >= 0)
		return (TRUE);
	// perror
	return (FALSE);
}
