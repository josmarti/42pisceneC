/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 16:25:05 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/15 23:42:47 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*small;
	char	*start;

	start = str;
	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			start = str;
			small = to_find;
			while (1)
			{
				if (*start++ != *small++)
					break ;
				if (!*small)
					return (str);
			}
		}
		str++;
	}
	return (((char *)0));
}
