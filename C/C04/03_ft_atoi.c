/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabertha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:53:04 by pabertha          #+#    #+#             */
/*   Updated: 2023/03/01 16:24:31 by pabertha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	k = 0;
	while (str[i] != '\0')
	{
		while ((str[i] > 8 && str[i] < 14) || (str[i] == 32))
			i++;
		while (str[i] == 43 || str[i] == 45)
		{
			if (str[i] == 45)
				j = -j;
			i++;
		}
		while (str[i] > 47 && str[i] < 58)
		{
			k = k * 10 + (str[i] - 48);
			i++;
		}
		return (j * k);
	}
	return (0);
}

/*
int	main()
{
	printf("%d", ft_atoi(" ---+--+1234ab567"));
	return (0);
}
*/
