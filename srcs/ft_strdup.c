/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 00:40:31 by mabdali           #+#    #+#             */
/*   Updated: 2023/04/19 11:58:18 by mabdali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*sdup;

	len = ft_strlen(s) + 1;
	sdup = malloc(sizeof(char) * len);
	if (!sdup)
		return (NULL);
	sdup = ft_memcpy(sdup, s, len);
	return (sdup);
}
