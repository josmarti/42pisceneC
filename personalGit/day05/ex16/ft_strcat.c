/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 12:32:27 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/15 13:06:38 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char *start;
	char *copy;

	start = dest;
	while (*start)
	{
		start++;
	}
	copy = src;
	while (*copy)
	{
		*start = *copy;
		start++;
		copy++;
	}
	*start = '\0';
	return (dest);
}
