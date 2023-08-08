/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontes- <afontes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:47:41 by afontes-          #+#    #+#             */
/*   Updated: 2023/07/30 15:51:38 by afontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	vef_base(char *base, int l)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] == '\0' && l == 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] <= 32 || base[i] == 127)
			return (0);
		j = i + 1;
		while (j < l)
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	l;
	int	nb;

	nb = nbr;
	l = 0;
	while (base[l])
		l++;
	if (vef_base(base, l))
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		if (nb < l)
		{
			write(1, &base[nb], 1);
		}
		if (nb >= l)
		{
			ft_putnbr_base((nb / l), base);
			ft_putnbr_base((nb % l), base);
		}
	}
}

/*#include <stdio.h>
int main(void)
{
    ft_putnbr_base(42, "0123456789"); 
}*/
