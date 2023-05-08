/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robhak <robhak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:51:30 by robhak            #+#    #+#             */
/*   Updated: 2023/02/19 16:10:33 by robhak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	main(int argc, char **argv)
{
	char	**tab;

	if (argc != 2)
	{	
		write(1, "Error\n", 6);
		return (1);
	}
	tab = init_tab(argv[1]);
	display_tab(tab);
	free_tab(tab);
	return (0);
}
