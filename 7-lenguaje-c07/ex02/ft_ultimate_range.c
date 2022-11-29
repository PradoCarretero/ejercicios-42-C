/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:39:08 by pcarrete          #+#    #+#             */
/*   Updated: 2022/11/24 13:39:09 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	size = max - min;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	*range = (int *) malloc (sizeof (int) * size);
	if (range == max)
	{
		range = NULL;
		return (0);
	}
	i = 0;
	while (min < max)
	{
		(*range[i]) = min;
		min++;
		i++;
	}
	return (i);
}

/*int main(void)
{
	int size;
	int *range;
	int i;

	size = ft_ultimate_range(&range, 1, 4);
	i = 0;
	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}*/
