/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 09:15:33 by pcarrete          #+#    #+#             */
/*   Updated: 2022/11/13 09:15:59 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	aux;
	int	p;

	i = 0;
	while (i < size -1)
	{
		p = i;
		while (p < size)
		{
			if (tab[p] < tab[i])
			{
				aux = tab[i];
				tab[i] = tab [p];
				tab [p] = aux;
			}
			p++;
		}
		i++;
	}
}

/*int	main(void)
{
	int tab[6] = {6, 3, 5, 4, 2, 6};
	ft_sort_int_tab(tab, 6);
	printf("%d %d %d %d %d %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	return (0);
}*/
