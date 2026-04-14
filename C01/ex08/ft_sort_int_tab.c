/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gproenca <gproenca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 17:25:58 by gproenca          #+#    #+#             */
/*   Updated: 2026/04/08 22:29:42 by gproenca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = -1;
	while (++i < size)
	{
		j = -1;
		while (++j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
		}
	}
}

/*int	main(void)
{
	int	size;
	int	i;

	size = 9;
	i = 0;
	int tab[9] = {3, 4, 8, 1, 6, 7, 9, 2, 5};

	printf("Before: ");

	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}

	printf("\nAfter: ");

	ft_sort_int_tab(tab, size);

	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}*/
