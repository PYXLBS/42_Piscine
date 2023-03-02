/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robhak <robhak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:00:53 by robhak            #+#    #+#             */
/*   Updated: 2023/02/19 17:17:01 by robhak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H
# define SIZE 4
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		is_valid_digit(char c);
int		input_is_valid(char *str);
void	print_puzzle(int tab[SIZE][SIZE]);
char	**init_tab(char *str);
void	display_tab(char **tab);
void	free_tab(char **tab);

#endif