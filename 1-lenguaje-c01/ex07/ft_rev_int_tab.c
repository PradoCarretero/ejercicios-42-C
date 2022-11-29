/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:40:12 by pcarrete          #+#    #+#             */
/*   Updated: 2022/11/13 09:14:54 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>
#include<unistd.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i < size -1)
	{
		aux = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = aux;
		i++;
		size --;
	}
}

/*int	main(void)
{
	int numbers[6] = {1, 2, 3, 4, 5, 6};
	ft_rev_int_tab(numbers, 6);
	printf("%d %d %d %d %d %d", numbers[0], numbers[1], ETC); 
}*/
