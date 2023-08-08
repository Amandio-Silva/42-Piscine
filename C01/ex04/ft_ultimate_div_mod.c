/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 11:43:44 by afontes-          #+#    #+#             */
/*   Updated: 2023/07/25 12:28:55 by afontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}

/*int	main(void)
{
	int	c;
	int	d;

	c = 10;
	d = 5;
	ft_ultimate_div_mod(&c, &d);
	printf("%d\n", c);
	printf("%d\n", d);
}*/
