/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:52:07 by mabdali           #+#    #+#             */
/*   Updated: 2023/02/08 15:02:20 by mabdali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*p1;
	char		*p2;

	i = 0;
	p1 = (char *)dest;
	p2 = (char *)src;
	if (p1 == NULL && p2 == NULL)
		return (NULL);
	if (p1 > p2)
	{
		while (i < n)
		{
			p1[n - 1] = p2[n - 1];
			n--;
		}
	}
	while (i < n)
	{
		p1[i] = p2[i];
		i++;
	}
	return (dest);
}
