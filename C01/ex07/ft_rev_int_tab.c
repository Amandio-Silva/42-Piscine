/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 07:57:35 by afontes-          #+#    #+#             */
/*   Updated: 2023/07/25 13:10:53 by afontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	size --;
	while (i < size)
	{
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
		i++;
		size--;
	}
}

/*int	main(void)
{
	int	tab[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int	size = 11;
	int	i;
	int	j;

	i = 0;
	j = 0;
	printf("Numeros Por ordem: \n");
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	ft_rev_int_tab(tab, size);
	printf("\n Numeros invertidos: \n " );
	while(j < size)
	{
		printf("%d", tab[j]);
		j++;
	}	
}*/
