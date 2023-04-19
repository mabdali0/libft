/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 00:40:31 by mabdali           #+#    #+#             */
/*   Updated: 2023/02/06 16:07:11 by mabdali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
