/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculetePixel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 12:47:41 by wwalas-           #+#    #+#             */
/*   Updated: 2023/01/07 12:55:33 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub3D.h>

//	calculate lowest and highest pixel to fill in current stripe

void	calculatePixel(t_raycast *itens, t_data *data)
{
	if (itens->drawStart < 0)
		itens->drawStart = 0;
	itens->drawEnd = itens->lineHeight / 2 + 480 / 2;
	if (itens->drawEnd >= 480)
		itens->drawEnd = 480 - 1;
}