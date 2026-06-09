/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gproenca <gproenca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 10:28:58 by gproenca          #+#    #+#             */
/*   Updated: 2026/04/22 16:01:35 by gproenca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_scmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*s1 && *s1 == *s2)
		i++;
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_partition(char **av, int low, int high)
{
	char	*pivot;
	int		i;
	int		j;

	pivot = av[high];
	i = low;
	j = low;
	while (j < high)
	{
		if (ft_scmp(av[j], pivot) < 0)
		{
			ft_swap(&av[i], &av[j]);
			i++;
		}
		j++;
	}
	ft_swap(&av[i], &av[high]);
	return (i);
}

void	ft_quicksort(char **av, int low, int high)
{
	int	pivot;

	if (low < high)
	{
		pivot = ft_partition(av, low, high);
		ft_quicksort(av, low, pivot - 1);
		ft_quicksort(av, pivot + 1, high);
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	ft_quicksort(av, 1, ac - 1);
	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
