/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabertha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:44:09 by pabertha          #+#    #+#             */
/*   Updated: 2023/02/17 02:47:28 by pabertha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] = str[i] - 32;
	i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	str[] = "aBc";

	ft_strupcase(str);
	printf("%s", str);
	return (0);
}
*/
