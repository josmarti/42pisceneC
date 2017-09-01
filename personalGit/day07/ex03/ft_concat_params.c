/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 14:09:09 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/17 16:32:07 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		param_length(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

void	copy_to_str(char *dest, char *src)
{
	char *temp;

	temp = dest;
	while (*src)
	{
		*temp = *src;
		temp++;
		src++;
	}
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		len;
	char	*temp;
	char	*str;

	len = 0;
	i = 0;
	while (++i < argc)
		len += param_length(argv[i]);
	i = 1;
	str = (char*)malloc(sizeof(*str) * (len + argc));
	temp = str;
	while (i < argc)
	{
		len = param_length(argv[i]);
		copy_to_str(temp, argv[i]);
		while (len--)
			temp++;
		if (i < argc - 1)
			*temp = '\n';
		temp++;
		i++;
	}
	return (str);
}
