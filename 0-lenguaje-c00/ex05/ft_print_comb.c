/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:04:45 by pcarrete          #+#    #+#             */
/*   Updated: 2022/11/08 07:59:35 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_every(char a, char b, char c)
{
	if (a == '7' && b == '8' && c == '9')
	{
		write(1, "789", 3);
		return ;
	}
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, ",", 1);
	write(1, " ", 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_print_every(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
