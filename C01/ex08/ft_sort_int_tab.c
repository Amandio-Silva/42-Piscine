/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 08:32:09 by afontes-          #+#    #+#             */
/*   Updated: 2023/07/25 10:20:45 by afontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[i] <= tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	int	tab[11] = {10, 21, 42, 63, 84, 25, 16, 77, 28, 39, 20};
	int	size
	size = 11;
	int	i;
	int	j;

	i = 0;
	j = 0;
	printf("Numeros Por ordem: \n");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	ft_sort_int_tab(tab, size);
	printf("\n Numeros invertidos:  \n " );
	while (j < size)
	{
		printf("%d ", tab[j]);
		j++;
	}
}*/
