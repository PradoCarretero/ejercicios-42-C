/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:39:54 by pcarrete          #+#    #+#             */
/*   Updated: 2022/11/16 16:45:39 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<string.h>
#include<stdio.h>

int	get_size(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
		return (i);
	}
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	sizedest;

	i = 0;
	j = 0;
	if (size > get_size(dest))
		return (
	while (dest[i])
	{
		i++;
	}
	while (src[j] != '\0' && j < size-1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i);
}

/*int	main(void)
{
	char dest[20] = "hola";
	char src[] = "caracola";

	printf("%lu", strlcat(dest, src, 6));
	return (0);
}*/
