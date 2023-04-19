/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:05:39 by mabdali           #+#    #+#             */
/*   Updated: 2023/04/19 11:55:16 by mabdali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static size_t	n_len(int n)
{
	size_t	len;

	len = 0;
	if (n == -2147483648)
		n++;
	if (n <= 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*buffer;
	unsigned int	un;
	size_t			len;

	len = n_len(n);
	if (n < 0)
		un = (unsigned int)(n * -1);
	else
		un = (unsigned int)n;
	buffer = (char *)malloc(sizeof(char) * (len + 1));
	if (!buffer)
		return (NULL);
	buffer[len--] = '\0';
	if (n < 0)
		buffer[0] = '-';
	else if (n == 0)
		buffer[0] = '0';
	while (un > 0)
	{
		buffer[len--] = (char)(un % 10 + '0');
		un /= 10;
	}
	return (buffer);
}
