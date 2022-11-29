/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:07:10 by pcarrete          #+#    #+#             */
/*   Updated: 2022/11/21 12:42:34 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	c;

	c = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		c = c * nb;
		power--;
	}
	return (c);
}

/*int	main(void)
{
	printf("%d", ft_iterative_power(2, 3));
}*/
