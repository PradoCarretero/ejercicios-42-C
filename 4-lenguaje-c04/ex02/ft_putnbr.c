/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:27:00 by pcarrete          #+#    #+#             */
/*   Updated: 2022/11/15 10:47:31 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	putchaar(int c)
{
	c = c + '0';
	write(1, &c, 1);
	return ;
}

void	ft_putnbr(int nb)
{
	int	c;

	if (nb == 2147483647)
	{
		write (1, "2147483647", 10);
		return ;
	}
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write (1, "-2147483648", 11);
			return ;
		}
		nb = nb * (-1);
		write (1, "-", 1);
	}
	if (nb <= 9)
		c = nb;
	else
	{
		c = nb % 10;
		ft_putnbr(nb / 10);
	}
	putchaar(c);
}

/*int	main(void)
{
	ft_putnbr(2147483647);
}*/
