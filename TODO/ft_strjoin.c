/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 10:42:26 by vboivin           #+#    #+#             */
/*   Updated: 2016/12/11 18:50:24 by vboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*outp;
	int		len;
	int		tmp;

	tmp = 0;
	if (s1 != NULL)
		tmp = ft_strlen(s1);
	len = tmp;
	if (s2 != 0)
		len = len + ft_strlen(s2);
	if (s1 == NULL)
		return (NULL);
	outp = (char *)malloc(sizeof(*outp) * (len + 1));
	if (s2 == NULL)
	{
		ft_strcpy(outp, s1);
		return (outp);
	}
	if (outp == NULL)
		return (NULL);
	ft_strcpy(outp, s1);
	ft_strcat(outp, s2);
	return (outp);
}
