/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspeedy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:25:59 by nspeedy           #+#    #+#             */
/*   Updated: 2021/09/14 17:52:43 by nspeedy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_substr(char	const *s, unsigned int start, size_t len)
{
	char	*subs;

	subs = (char *)malloc(sizeof(char) * (len + 1));
	if (!subs)
		return (0);
	ft_memcpy(subs, s + start, len);
	subs[len] = '\0';
	return (subs);
}
