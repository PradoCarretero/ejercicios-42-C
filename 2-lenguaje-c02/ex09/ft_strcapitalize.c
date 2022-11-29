/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:06:51 by pcarrete          #+#    #+#             */
/*   Updated: 2022/11/15 16:36:54 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
		if (i == 0 && ('a' <= str[i] && str[i] <= 'z'))
			str[i] -= 32;
		if ('a' <= str[i] && str[i] <= 'z')
		{
			if (!(('a' <= str[i - 1] && str[i - 1] <= 'z')
					|| ('A' <= str[i - 1] && str[i - 1] <= 'Z')
					|| ('0' <= str[i - 1] && str[i - 1] <= '9')))
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	cad[61] = "salut, comMMnt tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	*result;

	result = ft_strcapitalize(cad);
	printf("%s", result);
	return (0);
}*/
