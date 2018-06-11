/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghaddad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 13:22:09 by ghaddad           #+#    #+#             */
/*   Updated: 2018/04/30 15:46:13 by ghaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_realloc(char *str, size_t size)
{
	char	*tmp;
	size_t	len;
	size_t	i;

	if(str)
		len = ft_strlen(str);
	else
		len = 0;
	i = 0;
	if (!(tmp = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	tmp = ft_strdup(str);
	free(str);
	if (!(str = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (tmp[i] && i < (size))
	{
		str[i] = tmp[i];
		i++;
	}
	str[i] = 0;
	free(tmp);
	return (str);
}
