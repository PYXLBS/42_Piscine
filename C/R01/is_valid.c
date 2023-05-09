/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robhak <robhak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 09:55:39 by robhak            #+#    #+#             */
/*   Updated: 2023/02/19 10:01:13 by robhak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	is_valid_digit(char c)
{
	return (c >= '1' && c <= '4');
}

int	input_is_valid(char *str)
{
	int	i;

	if (ft_strlen(str) != 31)
	{
		return (0);
	}
	i = 0;
	while (i < 31)
	{
		if (!is_valid_digit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
