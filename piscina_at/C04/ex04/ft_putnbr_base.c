/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gproenca <gproenca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 14:58:05 by gproenca          #+#    #+#             */
/*   Updated: 2026/04/16 16:05:14 by gproenca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	valid_ft(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		bs_len;
	long	nm;

	bs_len = valid_ft(base);
	if (!bs_len)
		return ;
	nm = nbr;
	if (nm == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	if (nm < 0)
	{
		write(1, "-", 1);
		nm = -nm;
	}
	if (nm >= bs_len)
		ft_putnbr_base(nm / bs_len, base);
	write(1, &base[nm % bs_len], 1);
}
