/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 12:32:27 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/15 22:59:25 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlcpy(char *dest, char *src, int size)
{
	char	*start;
	int		i;

	start = dest;
	i = 0;
	while (i < size)
	{
		*start = *src;
		start++;
		src++;
		i++;
	}
	*start = '\0';
	return (i);
}
