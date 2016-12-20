/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 17:49:37 by vboivin           #+#    #+#             */
/*   Updated: 2016/12/08 18:27:51 by vboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	int				*outp;
	unsigned int	i;

	i = 0;
	outp = NULL;
	outp = (void *)malloc(size);
	if (outp)
		while (size--)
			outp[i++] = 0;
	return ((void *)outp);
}
