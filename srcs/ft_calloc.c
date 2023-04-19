/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 00:41:57 by mabdali           #+#    #+#             */
/*   Updated: 2023/04/19 11:54:11 by mabdali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*buffer;
	size_t	temp;

	if (nmemb == 0 || size == 0)
		return ((void *)malloc(0));
	temp = nmemb * size;
	if (nmemb != (temp / size))
		return (NULL);
	buffer = (void *)malloc(temp);
	if (!buffer)
		return (NULL);
	ft_bzero(buffer, temp);
	return (buffer);
}
