/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:08:31 by pcarrete          #+#    #+#             */
/*   Updated: 2022/11/24 13:08:32 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int	*fill_str(int min, int max, int *dest)
{
	int	i;

	i = 0;
	while (min < max)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
}

int	*ft_range(int min, int max)
{
	int		*dest;
	int		size;
	int		i;

	i = 0;
	if (min >= max)
		return (0);
	size = max - min;
	dest = (int *) malloc (sizeof (int) * size - 1);
	if (!dest)
		write(1, "error al guardar datos", 23);
	return (fill_str(min, max, dest));
}

/*int main(void)
{
	int *a;
	int i;
	a = ft_range(-10, 3);
	while (i < 13)
	{
		printf("%d\n", a[i]);
		i++;
	}
	return (0);
}*/
