/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:27:46 by pcarrete          #+#    #+#             */
/*   Updated: 2022/11/15 07:10:52 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	if (s1[i] != s2[i])
	{
		result = s1[i] - s2[i];
		return (result);
	}
	return (0);
}

/*int	main(void)
{
	
	char s1[] = "abcd";
	char s2[] = "abcD";
	int fstrcmp;
	int	result;
	fstrcmp = strcmp(s1, s2);
	result = ft_strcmp(s1, s2);
	printf("strcmp es %d, ", fstrcmp);
	printf("mi codigo es %d, ", result);
	return (0);
}*/
