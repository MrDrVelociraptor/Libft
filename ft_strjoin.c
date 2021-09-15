/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspeedy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 17:58:45 by nspeedy           #+#    #+#             */
/*   Updated: 2021/09/14 18:17:35 by nspeedy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	slen1;
	size_t	slen2;
	char	*dest;

	slen1 = ft_strlen(s1);
	slen2 = ft_strlen(s2);
	dest = (char *)malloc(sizeof(char) + (slen1 + slen2 + 1));
	if (!dest)
		return (0);
	ft_memcpy(dest, s1, slen1);
	ft_memcpy(dest + slen1, s2, slen2);
	dest[slen1 + slen2] = '\0';
	return (dest);
}
