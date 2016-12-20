/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 10:31:58 by vboivin           #+#    #+#             */
/*   Updated: 2016/12/07 15:23:10 by vboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if ((!s1 && !s2) || !n)
		return (1);
	else if (!s1 || !s2)
		return (0);
	if (ft_strncmp((const char *)s1, (const char *)s2, n) != 0)
		return (0);
	return (1);
}
