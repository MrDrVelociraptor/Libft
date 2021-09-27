/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspeedy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 17:58:46 by nspeedy           #+#    #+#             */
/*   Updated: 2021/09/27 15:51:07 by nspeedy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static size_t	ft_numnum(int n)
{
	size_t	len;

	len = 1;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*output;
	size_t		len;
	size_t		negpos;

	len = ft_numnum(n);
	negpos = 1;
	output = (char *)malloc(sizeof(char) * (len + 1));
	if (!output)
		return (0);
	output[--len] = '\0';
	if (n == 0)
		output[0] = '0';
	if (n < 0)
	{
		negpos *= -1;
		output[0] = '-';
	}
	while (n != 0)
	{
		len--;
		output[len] = ((n % 10) * negpos) + '0';
		n /= 10;
	}
	return (output);
}
