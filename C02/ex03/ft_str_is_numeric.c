/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 08:43:36 by afontes-          #+#    #+#             */
/*   Updated: 2023/07/27 08:58:22 by afontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	c;

	i = 1;
	c = 0;
	while (*str)
	{
		if (*str < '0' || *str > '9')
			i = 0;
		c++; 
		str++; 
	}
	if ((!c) || i)
		return (1);
	else
		return (0);
}
/*
#include<stdio.h>
int	main(void)
{
	char	*frase;
	char	i;

	frase = "asdasd";
	i = ft_str_is_numeric(frase);
	printf("%d \n", i);
	return (0);
}*/
