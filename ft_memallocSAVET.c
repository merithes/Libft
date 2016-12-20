/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 18:06:47 by vboivin           #+#    #+#             */
/*   Updated: 2016/12/08 18:25:23 by vboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	*ft_memalloc(size_t size)
{
	unsigned char	*mem;
	size_t			i;

	i = 0;
	mem = NULL;
	mem = (unsigned char *)malloc(size);
	if (mem)
	{
		while (size--)
		{
			mem[i] = 0;
			i++;
		}
	}
	return ((void *)mem);
}
