/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:44:49 by pcarrete          #+#    #+#             */
/*   Updated: 2022/11/17 11:39:11 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<string.h>
#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{	
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{	
		if (s1[i] != s2 [i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{

	char s1[] = "1237";
	char s2[] = "123";

	printf("%d \n", strncmp(s1, s2, 4));
	printf("%d", ft_strncmp(s1, s2, 5));
}*/
