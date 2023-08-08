/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontes- <afontes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 10:30:27 by afontes-          #+#    #+#             */
/*   Updated: 2023/07/29 15:46:21 by afontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0')
			return (s1[i] - s2 [i]);
		i++;
	}
	return (0);
}
/*
#include<stdio.h>

int	main(void)
{
	char	s1[] = "Ola Bom Dia";
	char	s2[] = "Ola Boa Tarde";
	int	n = 10;

	printf("%d\n", ft_strncmp(s1, s2, n));
}*/
