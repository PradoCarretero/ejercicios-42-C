/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:24:23 by pcarrete          #+#    #+#             */
/*   Updated: 2022/11/21 12:42:19 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb > 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (nb);
}

/*int	main (void)
{
	int	nb;
	nb = 6;
	printf("%d", ft_recursive_factorial(nb));
}*/
