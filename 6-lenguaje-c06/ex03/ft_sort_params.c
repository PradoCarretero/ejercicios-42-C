/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:24:34 by pcarrete          #+#    #+#             */
/*   Updated: 2022/11/20 12:06:36 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_diff(char *argv1, char *argv2)
{
	int	i;

	i = 0;
	while (argv1[i] == argv2[i] && argv1[i] && argv2[i])
	{
		i++;
	}
	if (argv1[i] != argv2[i])
	{
		return (argv1[i] - argv2[i]);
	}
	return (0);
}

void	swich(char **s1, char **s2)
{
	char	*aux;

	aux = *s1;
	*s1 = *s2;
	*s2 = aux;
}

void	ft_print(int argc, char *argv[])
{
	int	j;
	int	i;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		j++;
		write(1, "\n", 1);
	}
}

int	main(int argc, char *argv[])
{
	int	j;
	int	p;
	int	is_diff;

	p = 1;
	while (p < argc -1)
	{
		j = 1;
		while (j < argc -1)
		{
			if (argc < 1)
				return (0);
			is_diff = ft_diff(argv[j], argv[j + 1]);
			if (is_diff > 0)
				swich(&argv[j], &argv[j + 1]);
			j++;
		}
		p++;
	}
	j = 1;
	if (j < argc)
	{
		ft_print(argc, argv);
	}
}
