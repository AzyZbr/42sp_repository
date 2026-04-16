/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gproenca <gproenca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 16:05:26 by gproenca          #+#    #+#             */
/*   Updated: 2026/04/16 16:39:04 by gproenca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_values(char g, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == g)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	res;
	int	sign;
	int	bs_len;
	int	value;

	res = 0;
	sign = 1;
	bs_len = valid_ft(base);
	if (!bs_len)
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign *= -1;
	value = ft_values(*str, base);
	while (value != -1)
	{
		res = res * bs_len + value;
		str++;
		value = ft_values(*str, base);
	}
	return (res * sign);
}
