/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 10:13:29 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/11 22:08:41 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strrev(char *str)
{
	char	temp;
	int		length;
	int		i;

	i = 0;
	temp = ' ';
	length = ft_strlen(str);
	while (i < length)
	{
		temp = str[i];
		str[i] = str[length - 1];
		str[length - 1] = temp;
		i++;
		length--;
	}
	return (str);
}
