/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkari <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:45:20 by pkari             #+#    #+#             */
/*   Updated: 2021/09/06 14:45:23 by pkari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (s1 < s2)
	{
		while (n--)
			*s1++ = *s2++;
	}
	else
	{
		while (n > 0)
		{
			n--;
			s1[n] = s2[n];
		}
	}
	return (dst);
}
