/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:21:14 by pcarrete          #+#    #+#             */
/*   Updated: 2022/11/14 20:23:25 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(('A' <= str[i] && 'Z' >= str[i])
				|| ('a' <= str[i] && 'z' >= str[i])))
			return (0);
			i++;
	}
	return (1);
}

/*int	main(void)
{
	char result;
	char src[] = "chahca";
	result = ft_str_is_alpha(src);
	printf("%d", result);
	return (0);	
}*/
