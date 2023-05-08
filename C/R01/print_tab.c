/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robhak <robhak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:27:10 by robhak            #+#    #+#             */
/*   Updated: 2023/02/19 16:10:22 by robhak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	**init_tab(char *str)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	tab = malloc(sizeof(char *) * 4);
	while (i < 4)
	{
		j = 0;
		tab[i] = malloc(sizeof(char) * 4);
		while (j < 4)
		{
			tab[i][j] = str[(i + j) * 2];
			j++;
		}
		i++;
	}
	return (tab);
}

void	display_tab(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			write(1, &tab[i][j], 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	free_tab(char **tab)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}
