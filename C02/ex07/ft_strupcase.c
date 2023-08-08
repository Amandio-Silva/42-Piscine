/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:38:40 by afontes-          #+#    #+#             */
/*   Updated: 2023/07/28 08:45:10 by afontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 'a' && str[c] <= 'z')
			str[c] = str[c] - 32;
		c++;
	}
	return (str);
}
/* 
#include<stdio.h>
int	main(void)
{
	char	str[] = "Ola Bom Dia";
	printf("%s\n", ft_strupcase(str));
}*/
