/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabertha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 21:58:52 by pabertha          #+#    #+#             */
/*   Updated: 2023/02/14 21:10:21 by pabertha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_print_numbers(void)
{
	write(1, "0123456789", 10);
}

/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/