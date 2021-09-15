/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspeedy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:22:04 by nspeedy           #+#    #+#             */
/*   Updated: 2021/09/14 15:51:25 by nspeedy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	slen;
	char	*scpy;

	slen = ft_strlen(s1);
	scpy = (char *)malloc(sizeof(char) * (slen + 1));
	if (!scpy)
		return (0);
	slen = 0;
	while (s1[slen])
	{
		scpy[slen] = s1[slen];
		slen++;
	}
	scpy[slen] = '\0';
	return (scpy);
}
