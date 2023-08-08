/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:26:52 by afontes-          #+#    #+#             */
/*   Updated: 2023/07/28 08:44:00 by afontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	l;
	int	c;

	l = 1;
	c = 0;
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
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

	f = "ADSDAS";
	l = ft_str_is_uppercase(f);
	printf("%d \n", l);
}*/
