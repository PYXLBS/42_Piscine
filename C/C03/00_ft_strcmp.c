/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabertha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:02:04 by pabertha          #+#    #+#             */
/*   Updated: 2023/02/26 18:03:47 by pabertha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] + s2[i]) != 0)
	{
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] == s2[i])
			i++;
	}
	return (0);
}

/*
int	main(void)
{
	char *s1 = "test?";
	char *s2 = "test!";
	printf("%d", ft_strcmp(s1, s2));
	return (0);
}
*/
