/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 22:50:00 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/14 23:34:51 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char *temp;

	temp = str;
	while (*temp)
	{
		if ((*temp >= 'A') && (*temp <= 'Z'))
		{
			*temp = ((*temp - 'A') + 'a');
			temp++;
		}
		else
			temp++;
	}
	return (str);
}
