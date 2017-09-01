/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 13:13:13 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/15 23:04:17 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, int n)
{
	char	*temp;
	int		i;

	i = 0;
	temp = dest;
	while ((*src) && (i < n))
	{
		*temp = *src;
		temp++;
		src++;
		i++;
	}
	while (i < n)
	{
		*temp = '\0';
		i++;
		temp++;
	}
	return (dest);
}
