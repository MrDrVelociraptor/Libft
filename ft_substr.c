/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspeedy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:25:59 by nspeedy           #+#    #+#             */
/*   Updated: 2021/09/28 17:13:37 by nspeedy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_substr(char	const *s, unsigned int start, size_t len)
{
	char	*subs;

	if (s == 0)
		return (0);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	subs = (char *)malloc(sizeof(char) * (len + 1));
	if (!subs)
		return (0);
	ft_strlcpy(subs, s + start, len + 1);
	return (subs);
}
