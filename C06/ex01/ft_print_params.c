/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontes- <afontes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:20:36 by afontes-          #+#    #+#             */
/*   Updated: 2023/07/31 08:19:41 by afontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void put(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++; 
    }
}
int main(int ac, char **av) 
{
    int i;

    i = 1;
    while (i < ac) 
    {
        put(av[i]);
        write(1, "\n", 1);
        i++;
    }
  return (0);
}