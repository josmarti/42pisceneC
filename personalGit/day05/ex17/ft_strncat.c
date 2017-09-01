/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 12:32:27 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/15 21:22:57 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	char	*start;
	char	*copy;
	int		i;

	start = dest;
	while (*start)
	{
		start++;
	}
	copy = src;
	i = 0;
	while (i < nb)
	{
		*start = *copy;
		start++;
		copy++;
		i++;
	}
	*start = '\0';
	return (dest);
}
