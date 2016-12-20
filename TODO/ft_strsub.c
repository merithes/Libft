/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 10:42:26 by vboivin           #+#    #+#             */
/*   Updated: 2016/12/08 20:15:42 by vboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*outp;
	unsigned int	i;

	i = 0;
	outp = NULL;
	if (!s)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
		return (NULL);
	outp = (char *)malloc(sizeof(char) * (len + 1));
	if (outp)
	{
		while (i < len)
		{
			outp[i] = s[i + start];
			i++;
		}
		outp[i] = '\0';
	}
	return (outp);
}
