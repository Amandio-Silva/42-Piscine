/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 11:02:36 by afontes-          #+#    #+#             */
/*   Updated: 2023/07/25 10:22:39 by afontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<unistd.h>
#include<stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

/*int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 100;
	b = 10;
	ft_div_mod(a, b, &div, &mod);
	printf("%d\n", div);
	printf("%d\n", mod);
}*/
