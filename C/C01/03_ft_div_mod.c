/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabertha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:50:06 by pabertha          #+#    #+#             */
/*   Updated: 2023/02/14 20:38:31 by pabertha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)

{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;
	int	y;
	int	z;

	a = 42;
	b = 10;
	div = &y;
	mod = &z;
	ft_div_mod(y, z, div, mod);
	printf("%d\n%d\n%d\n%d\n", y, z, *div, *mod);
	return (0);
}
*/
