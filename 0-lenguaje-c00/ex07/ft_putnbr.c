/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 08:26:58 by pcarrete          #+#    #+#             */
/*   Updated: 2022/11/13 08:27:10 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	putcharr(int c)
{
	int	d;

	d = c + '0';
	write(1, &d, 1);
	return ;
}

void	divide(int nb)
{
	int	c;

	if (nb <= 9)
	{
		c = nb;
	}
	else
	{
		divide(nb / 10);
		c = nb % 10;
	}
	putcharr(c);
}

void	ft_putnbr(int nb)
{
	if (nb == 2147483647)
	{
		write(1, "2147483647", 10);
		return ;
	}
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -1 * nb;
		write(1, "-", 1);
		divide(nb);
	}
	else
		divide(nb);
}

int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
