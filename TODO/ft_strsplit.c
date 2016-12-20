/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 17:36:52 by vboivin           #+#    #+#             */
/*   Updated: 2016/12/11 18:39:26 by vboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_cnt_parts(const char *s, char c)
{
	int		cnt;
	int		i;

	cnt = 0;
	i = 0;
	if (s != NULL)
		while (s[i] != '\0')
		{
			if (s[i] != c && s[i] != '\0')
			{
				cnt++;
				while (s[i] != c && s[i] != '\0')
					i++;
			}
			while (s[i] == c)
				i++;
		}
	return (cnt);
}

static int		ft_getlen(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**outp;
	int		nb_word;
	int		i;

	i = 0;
	nb_word = ft_cnt_parts((const char *)s, c);
	outp = (char **)malloc(sizeof(char *) * (nb_word + 1));
	if (!outp)
		return (NULL);
	while (nb_word--)
	{
		while (*s == c && *s != '\0')
			s++;
		outp[i] = ft_strsub((const char *)s, 0, ft_getlen((const char *)s, c));
		if (!outp)
			return (NULL);
		s = s + ft_getlen(s, c);
		i++;
	}
	outp[i] = NULL;
	return (outp);
}
