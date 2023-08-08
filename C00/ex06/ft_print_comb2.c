/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 08:22:42 by afontes-          #+#    #+#             */
/*   Updated: 2023/07/20 16:59:50 by afontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar((a / 10) + 48);
			ft_putchar((a % 10) + 48);
			write(1, "  ", 1);
			ft_putchar((b / 10) + 48);
 			ft_putchar((b % 10) + 48);
			if (a != 98)
				write(1, ",", 2);
			b++;
		}
		a++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
}*/
