/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:14:29 by pcarrete          #+#    #+#             */
/*   Updated: 2022/11/08 08:20:16 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_put_char(char a, char b, char c, char d)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, " ", 1);
	write (1, &c, 1);
	write (1, &d, 1);
	if (a == '9' && b == '8' && c == '9' && d == '9')
	{
		return ;
	}
	write (1, ", ", 1);
}

void	ft_aumenta_num(char a, char b, char c, char d)
{
	b = '0';
	while (b <= '8')
	{
		c = a;
		while (c <= '9')
		{
			d = b + 1;
			while (d <= '9')
			{
				ft_put_char(a, b, c, d);
				d++;
			}
			c++;
		}
		b++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;	

	a = '0';
	while (a <= '9')
	{
		ft_aumenta_num(a, b, c, d);
		a++;
	}
}
