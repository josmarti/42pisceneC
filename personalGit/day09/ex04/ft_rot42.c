/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 15:53:04 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/18 17:23:14 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	crypto(char *str)
{
	int offset;

	if ((*str >= 'a') && (*str <= 'z'))
	{
		if (*str >= 'o')
			*str = *str - 14;
		else
			*str = *str + 16;
		if (*str > 'z')
		{
			offset = *str - 'z';
			*str = 'a' + offset;
		}
	}
	else if ((*str >= 'A') && (*str <= 'Z'))
	{
		*str = *str + 16;
		if (*str > 'Z')
		{
			offset = *str - 'Z';
			*str = 'A' + offset;
		}
	}
	return (*str);
}

char	*ft_rot42(char *str)
{
	char	*holder;

	holder = str;
	while (*str)
	{
		*str = crypto(str);
		str++;
	}
	return (holder);
}
