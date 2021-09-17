/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspeedy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:22:04 by nspeedy           #+#    #+#             */
/*   Updated: 2021/09/16 16:34:02 by nspeedy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strdup(const char *s)
{
	size_t	slen;
	char	*scpy;

	slen = ft_strlen(s);
	scpy = (char *)malloc(sizeof(char) * (slen + 1));
	if (!scpy)
		return (0);
	slen = 0;
	while (s[slen])
	{
		scpy[slen] = s[slen];
		slen++;
	}
	scpy[slen] = '\0';
	return (scpy);
}
