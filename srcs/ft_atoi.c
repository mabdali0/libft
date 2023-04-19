/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 00:18:56 by mabdali           #+#    #+#             */
/*   Updated: 2023/04/19 11:53:11 by mabdali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (nptr[i] && ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32))
		i++;
	if (nptr[i] == 45)
	{
		sign *= -1;
		i++;
	}
	else if (nptr[i] == 43)
		i++;
	while (nptr[i] && ft_isdigit(nptr[i]))
	{
		result = ((result * 10) + (nptr[i] - 48));
		i++;
	}
	return (result * sign);
}
