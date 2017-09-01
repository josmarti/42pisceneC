/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 22:50:00 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/15 22:53:37 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char *temp;

	temp = str;
	while (*temp)
	{
		if ((*temp >= 'a') && (*temp <= 'z'))
		{
			*temp = ((*temp - 'a') + 'A');
			temp++;
		}
		else
			temp++;
	}
	return (str);
}
