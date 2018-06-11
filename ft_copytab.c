/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copytab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghaddad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 10:40:24 by ghaddad           #+#    #+#             */
/*   Updated: 2018/03/28 11:58:15 by ghaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_copytab(char **dest, char **src, int l)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	ft_strdel(dest);
	if (!(dest = (char**)malloc(sizeof(char*) * l)))
		return (NULL);
	while (i < l)
	{
		if (!(dest[i] = (char*)malloc(sizeof(char) * ft_strlen(src[i]) + 1)))
			return (NULL);
		while (src[i][j])
		{
			dest[i][j] = src[i][j];
			j++;
		}
		dest[i][j] = '\0';
		j = 0;
		i++;
	}
	dest[i] = 0;
	return (dest);
}
