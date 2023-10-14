/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabertha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 09:41:27 by pabertha          #+#    #+#             */
/*   Updated: 2023/02/14 21:03:54 by pabertha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
int	main(void)
{
	int y;
	int z;

	y = 23;
	z = 7;
	int *pva;
	int *pvb;
	pva = &y;
	pvb = &z;
	ft_ultimate_div_mod(pva, pvb);
	printf("%d\n%d\n", y, z);
	printf("%d\n%d", *pva, *pvb);
	return (0);
}
*/
