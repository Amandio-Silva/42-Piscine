/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:00:32 by afontes-          #+#    #+#             */
/*   Updated: 2023/07/28 08:43:26 by afontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	l;
	int	c;

	l = 1;
	c = 0;
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
			l = 0;
		c++;
		str++;
	}
	if ((!c) || l)
		return (1);
	else
		return (0);
}
/*
#include<stdio.h>
int	main(void)
{
	char	*f;
	char	l;

	f = "asdas";
	l = ft_str_is_lowercase(f);
	printf("%d \n", l);
}*/
