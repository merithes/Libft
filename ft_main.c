/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 16:53:15 by vboivin           #+#    #+#             */
/*   Updated: 2016/12/11 18:45:42 by vboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int				main(void)
{
	char		*ret;

	ft_strjoin(NULL, NULL);
	ft_strjoin(NULL, "");
	ft_strjoin("", NULL);
	ret = ft_strjoin("Hello ", "boys");
	printf("1\n");
	if (strcmp(ret, "Hello boys") != 0)
	{
		printf("a\n");
			free(ret);
		return (0);
	}
	printf("2\n");
	free(ret);
	ret = ft_strjoin("", "boys");
	if (strcmp(ret, "boys") != 0)
	{
		printf("b\n");
			free(ret);
		return (0);
	}
	printf("3\n");
	free(ret);
	ret = ft_strjoin("Hello ", "");
	if (strcmp(ret, "Hello ") != 0)
	{
		printf("c\n");
			free(ret);
		return (0);
	}
	printf("4\n");
	free(ret);
	ret = ft_strjoin("", "");
	if (strcmp(ret, "") != 0)
	{
		printf("d\n");
			free(ret);
		return (0);
	}
	printf("5\n");
	free(ret);
	return (1);
}
