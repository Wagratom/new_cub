/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3D.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:32:06 by wwallas-          #+#    #+#             */
/*   Updated: 2022/12/01 17:29:54 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

#include <libft.h>
#include <mlx.h>
#include <structs.h>

#include <stdio.h>

# define VALID_CHARS "01NSEW\n"

# define P_Y 0
# define P_X 1

t_bool		verify_extension(char *file_name);
t_bool		open_file(t_map *data);
t_bool		valid_chars_line(t_data *data, char *line);
void		interactor_chars(t_data *data, char c);
void		alloc_map(t_map *data);
void		check_close(t_map *data, int position_x, int position_y);

void	draw_map(char **map);

#endif
