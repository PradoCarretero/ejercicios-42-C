/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:43:45 by pcarrete          #+#    #+#             */
/*   Updated: 2022/11/22 10:27:04 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_sqrt(int nb)
{
	int	c;

	c = 0;
	if (nb <= 0)
		return (0);
	while (c * c < nb)
	{
		if (c > 46340)
			return (0);
		c++;
	}
	if (c * c == nb)
		return (c);
	return (0);
}

/*int	main(void)
{
	ft_sqrt(8);
	printf("%d", ft_sqrt(26));
}*/
