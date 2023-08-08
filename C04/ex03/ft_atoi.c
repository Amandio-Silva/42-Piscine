/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontes- <afontes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 09:45:11 by afontes-          #+#    #+#             */
/*   Updated: 2023/07/30 15:53:49 by afontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	r;

	i = 0;
	s = 1;
	r = 0;
	while (str[i] == ' ' || (str[i] > 8 && str[i] < 14))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = s * -1;
		i++;
	}
	while (str[i] && ('0' <= str[i]) && (str[i] <= '9'))
	{
		r = (r * 10) + str[i] - 48;
		i++;
	}
	return (r * s);
}
/*int	main(void)
{
	char	str[] = "\n   -+--124124asfasf31125";
	
	printf("%d\n", ft_atoi(str));
}*/
