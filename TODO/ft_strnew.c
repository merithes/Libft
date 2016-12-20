/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 18:18:32 by vboivin           #+#    #+#             */
/*   Updated: 2016/12/08 18:42:19 by vboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char			*outp;
	unsigned	int	i;

	i = 0;
	outp = (char *)malloc((size + 1) * (sizeof(char)));
	if (outp)
		while (i <= size)
			outp[i++] = '\0';
	return (outp);
}
