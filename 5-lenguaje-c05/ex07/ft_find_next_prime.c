/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:50:31 by pcarrete          #+#    #+#             */
/*   Updated: 2022/11/21 12:50:36 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_is_prime(int nb)
{
	int	c;

	c = nb - 1;
	if (nb <= 1)
		return (0);
	while (c > 1)
	{
		if (nb % c == 0)
			return (0);
		c --;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while ((ft_is_prime(nb) != 1))
	{
		nb++;
	}
	return (nb);
}

/*int main(void)
{
	printf("%d", ft_find_next_prime(0));
}*/
