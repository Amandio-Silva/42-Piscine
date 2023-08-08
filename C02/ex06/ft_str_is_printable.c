/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:31:18 by afontes-          #+#    #+#             */
/*   Updated: 2023/07/28 08:44:39 by afontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	l;
	int	c;

	l = 1;
	c = 0;
	while (*str)
	{
		if (*str < ' ' || *str > '~')
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

	f = "\n";
	l = ft_str_is_printable(f);
	printf("%d \n", l);
}*/
