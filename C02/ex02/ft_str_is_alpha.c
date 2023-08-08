/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 08:28:51 by afontes-          #+#    #+#             */
/*   Updated: 2023/07/27 08:42:30 by afontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 1;
	while (*str)
	{
		if ((*str < 'A') || (*str > 'Z' && *str < 'a') || (*str > 'z'))
			c = 0;
		i++; 
		str++; 
	}
	if ((!i) || c)
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

	frase = "123";
	i = ft_str_is_alpha(frase);
	printf("%d \n", i);
}*/
