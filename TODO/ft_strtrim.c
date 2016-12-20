/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 10:42:26 by vboivin           #+#    #+#             */
/*   Updated: 2016/12/11 18:42:38 by vboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_getnot(char const *s, int fromend)
{
	size_t i;

	i = 0;
	if (fromend == 1 && s)
		while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		{
			i++;
		}
	else if (fromend == 0)
	{
		i = ft_strlen(s) - 1;
		while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		{
			i--;
		}
		i++;
		return (ft_strlen(s) - i);
	}
	return (i);
}

static	int	ft_onlyspace(char const *s)
{
	size_t i;

	i = 0;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i])
		i++;
	if (i == ft_strlen(s))
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	int		ln;
	int		strt;
	char	*outp;

	if (s != NULL)
	{
		if (ft_onlyspace(s))
		{
			outp = (char *)malloc(sizeof(char *) * 2);
			ft_strcpy(outp, "");
			return (outp);
		}
	}
	else
		return (NULL);
	strt = ft_getnot(s, 1);
	ln = ft_strlen((char *)s) - strt;
	if (s != NULL)
		ln = ln - ft_getnot(s, 0);
	outp = (char *)malloc(sizeof(char) * ln);
	if (!s)
		return (outp = NULL);
	outp = ft_strsub(s, strt, ln);
	return (outp);
}
