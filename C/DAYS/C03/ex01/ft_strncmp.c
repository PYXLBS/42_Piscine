/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabertha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:04:00 by pabertha          #+#    #+#             */
/*   Updated: 2023/02/26 18:04:19 by pabertha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (((s1[i] + s2[i]) != 0) && i < n)
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
	char *s1 = "Hello";
	char *s2 = "HelloWorld";
	unsigned int n = 7;
	printf("%d", ft_strncmp(s1, s2, n));
	return (0);
}
*/
