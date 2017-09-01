/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 12:32:27 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/15 22:59:37 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlcat(char *dest, char *src, int nb)
{
	char	*start;
	char	*copy;
	int		i;

	start = dest;
	i = 0;
	while (*start)
	{
		start++;
		i++;
	}
	copy = src;
	while (i < nb)
	{
		*start = *copy;
		start++;
		copy++;
		i++;
	}
	*start = '\0';
	return (i);
}
