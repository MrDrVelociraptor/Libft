/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspeedy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 12:13:59 by nspeedy           #+#    #+#             */
/*   Updated: 2021/09/10 13:30:54 by nspeedy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destlen)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (srclen + 1 < destlen)
	{
		ft_memcpy(dest, src, srclen);
		dest[srclen] = '\0';
	}
	else if (destlen != 0)
	{
		ft_memcpy(dest, src, destlen - 1);
		dest[destlen - 1] = '\0';
	}
	return (srclen);
}
