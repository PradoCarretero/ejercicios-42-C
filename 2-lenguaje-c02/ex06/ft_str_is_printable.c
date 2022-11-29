/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:54:46 by pcarrete          #+#    #+#             */
/*   Updated: 2022/11/15 15:58:03 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(31 <= str[i] && str[i] <= 126))
			return (0);
	i++;
	}
	return (1);
}

/*int main(void)
{
    char    result;
    result = ft_str_is_printable(" ");
    printf("%d", result);
}*/
