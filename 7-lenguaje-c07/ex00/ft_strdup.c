/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:05:26 by pcarrete          #+#    #+#             */
/*   Updated: 2022/11/24 13:05:28 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		size;
	int		i;

	i = 0;
	size = ft_strlen(src);
	dest = (char *) malloc (sizeof(char) * size - 1);
	if (dest == NULL)
		write(1, "error", 5);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	printf("%d\n", dest[i]);
	return (dest);
}

/*int	main(void)
{
	char	src[]= "HOla";
	printf("%s", ft_strdup(src));
	free(src);
	return 0;
}*/
