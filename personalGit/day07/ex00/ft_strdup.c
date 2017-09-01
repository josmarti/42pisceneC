/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 00:57:42 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/31 15:16:50 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	char *temp;

	temp = dest;
	while (*src)
	{
		*temp = *src;
		temp++;
		src++;
	}
	*temp = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*str;
	char	*temp;

	len = 0;
	temp = src;
	while (*temp)
	{
		len++;
		temp++;
	}
	str = (char*)malloc(sizeof(*str) * (len));
	ft_strcpy(str, src);
	return (str);
}
