/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:48:56 by pcarrete          #+#    #+#             */
/*   Updated: 2022/11/21 12:49:13 by pcarrete         ###   ########.fr       */
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

/*int main(void)
{
	printf("%d", ft_is_prime(26));
}*/
